#!/usr/bin/octave-cli

N = 1530;
M(randperm(N), :) = uint8(255*hsv(N));

args = argv();
f = fopen(args{1}, 'w');
fprintf(f, '#ifndef PALETTE_H_\n');
fprintf(f, '#define PALETTE_H_\n');
fprintf(f, '\n');
fprintf(f, 'static const uint32_t PALETTE[] = \n');
fprintf(f, '{\n');
for i = 1:N
  fprintf(f, '\t0x%02X%02X%02X,\n', M(i,1), M(i,2), M(i,3));
end
fprintf(f, '};\n');
fprintf(f, '\n');
fprintf(f, '#endif // PALETTE_H_\n');
fclose(f);
