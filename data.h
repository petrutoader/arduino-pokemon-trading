#define TRAINER_DATA_LENGTH 418

uint8_t INPUT_PARTNER_DATA[TRAINER_DATA_LENGTH];

const uint8_t PARTNER_DATA[TRAINER_DATA_LENGTH] = {
0x87, 0x80, 0x82, 0x8A, 0x84, 0x91, 0x50, 0x00, 0x00, 0x00, 0x00, // name
0x1, 0x24, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, // nr of pokemon, pokemon ID, stop byte
// 6 pokemon
//spc curr HP   lvl  sts  typ1  typ2  cr    mv1   mv2  mv3  mv4  OT         experience      HP EV     att EV    def EV    speed EV  Speci EV  IV          mvPP  mvPP mvPP mvPP Lvl  max HP     attack    defense   speed     special
0x24, 0x0, 0xD, 0x2, 0x0, 0x0,  0x2,  0xFF, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,  0x0, 0x0, 0x9,  0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46, 0x21, 0x23, 0x0, 0x0, 0x0, 0x2, 0x0, 0xD,  0x0, 0x6, 0x0, 0x6, 0x0, 0x7, 0x0, 0x6,
0x85, 0x0, 0x1, 0x5, 0x1, 0x15, 0x15, 0xFF, 0x96, 0x0, 0x0, 0x0, 0x8, 0x87, 0x0, 0x0, 0x9C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2D, 0x24, 0x28, 0x0, 0x0, 0x0, 0x5, 0x0, 0x11, 0x0, 0x6, 0x0, 0xB, 0x0, 0xD, 0x0, 0x7,
0x85, 0x0, 0x1, 0x5, 0x1, 0x15, 0x15, 0xFF, 0x96, 0x0, 0x0, 0x0, 0x8, 0x87, 0x0, 0x0, 0x9C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2D, 0x24, 0x28, 0x0, 0x0, 0x0, 0x5, 0x0, 0x11, 0x0, 0x6, 0x0, 0xB, 0x0, 0xD, 0x0, 0x7,
0x85, 0x0, 0x1, 0x5, 0x1, 0x15, 0x15, 0xFF, 0x96, 0x0, 0x0, 0x0, 0x8, 0x87, 0x0, 0x0, 0x9C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2D, 0x24, 0x28, 0x0, 0x0, 0x0, 0x5, 0x0, 0x11, 0x0, 0x6, 0x0, 0xB, 0x0, 0xD, 0x0, 0x7,
0x85, 0x0, 0x1, 0x5, 0x1, 0x15, 0x15, 0xFF, 0x96, 0x0, 0x0, 0x0, 0x8, 0x87, 0x0, 0x0, 0x9C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2D, 0x24, 0x28, 0x0, 0x0, 0x0, 0x5, 0x0, 0x11, 0x0, 0x6, 0x0, 0xB, 0x0, 0xD, 0x0, 0x7,
0x85, 0x0, 0x1, 0x5, 0x1, 0x15, 0x15, 0xFF, 0x96, 0x0, 0x0, 0x0, 0x8, 0x87, 0x0, 0x0, 0x9C, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2D, 0x24, 0x28, 0x0, 0x0, 0x0, 0x5, 0x0, 0x11, 0x0, 0x6, 0x0, 0xB, 0x0, 0xD, 0x0, 0x7,
// 6 trainer names
0x87, 0x80, 0x82, 0x8A, 0x84, 0x91, 0x50, 0x00, 0x00, 0x00, 0x00,
0xFF, 0x84, 0x83, 0x50, 0x80, 0x92, 0x87, 0x50, 0x89, 0x80, 0x82,
0xFF, 0x84, 0x83, 0x50, 0x80, 0x92, 0x87, 0x50, 0x89, 0x80, 0x82,
0xFF, 0x84, 0x83, 0x50, 0x80, 0x92, 0x87, 0x50, 0x89, 0x80, 0x82,
0xFF, 0x84, 0x83, 0x50, 0x80, 0x92, 0x87, 0x50, 0x89, 0x80, 0x82,
0xFF, 0x84, 0x83, 0x50, 0x80, 0x92, 0x87, 0x50, 0x89, 0x80, 0x82,
// 6 nicknames
0x8F, 0x88, 0x83, 0x86, 0x84, 0x98, 0x50, 0x50, 0x50, 0x50, 0x50,
0x8C, 0x80, 0x86, 0x88, 0x8A, 0x80, 0x91, 0x8F, 0x50, 0x50, 0x50,
0x8C, 0x80, 0x86, 0x88, 0x8A, 0x80, 0x91, 0x8F, 0x50, 0x50, 0x50,
0x8C, 0x80, 0x86, 0x88, 0x8A, 0x80, 0x91, 0x8F, 0x50, 0x50, 0x50,
0x8C, 0x80, 0x86, 0x88, 0x8A, 0x80, 0x91, 0x8F, 0x50, 0x50, 0x50,
0x8C, 0x80, 0x86, 0x88, 0x8A, 0x80, 0x91, 0x8F, 0x50, 0x50, 0x50,
// 2 useless bytes??
0x00, 0x00, 0x00};
