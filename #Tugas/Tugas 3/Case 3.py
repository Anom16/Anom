print("PROGRAM HITUNG GAJI KARYAWAN\n")

nama = input('Masukan Nama Karyawan             : ')
gol = int(input('Masukan Golongan Jabatan(1/2/3) : '))
pend = input('Masukan Pendidikan(SMA/D1/D3/S1)    : ')
jam = int(input('Masukan Jumlah Jam Kerja    : '))

print("\nGaji Akhir Karyawan\n")
awal = 300000
lembur =3500
golongan = {1:0.05, 2:0.1, 3:0.15}
pendidikan = {"SMA":0.025, "D1":0.05, "D3":0.2, "S1":0.3}
golongan1=awal*golongan[gol]
pendidikan1=awal*pendidikan[pend]
akhir=golongan1 + pendidikan1 + awal 
print(f"Karyawan yang bernama {nama}")
print('Gaji yang diterima')
print(f"Gaji Normal Rp{awal}")
print(f'Tunjangan Jabatan Rp{golongan1}')
print(f'Tunjangan Pendidikan Rp{pendidikan1}')
if jam > 8:
    honor = (jam - 8) * lembur
    print(f"Jumlah jam lembur {jam - 8} jam")
else:
    print(f"Jumlah jam kerja {jam} adalah normal.")
    honor=0
    lembur=0
print(f"Honor Lembur {honor}")
print(f"Gaji Akhir Karyawan Rp{akhir + honor}")