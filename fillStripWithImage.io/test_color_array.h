#define NUM_LEDS 35
#define NB_SECTORS_USED 36
const uint8_t colorsForStrip[36][35][3] PROGMEM ={{{208, 36, 92}, {211, 33, 83}, {216, 31, 75}, {218, 27, 68}, {223, 23, 59}, {227, 19, 53}, {228, 18, 47}, {255, 255, 255}, {255, 255, 255}, {246, 12, 25}, {241, 4, 10}, {249, 6, 10}, {248, 3, 2}, {199, 34, 30}, {255, 255, 255}, {255, 255, 255}, {249, 43, 3}, {251, 51, 0}, {248, 64, 0}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{209, 37, 93}, {210, 32, 84}, {217, 31, 78}, {215, 22, 67}, {220, 24, 64}, {222, 21, 57}, {230, 22, 54}, {255, 255, 255}, {255, 255, 255}, {240, 13, 32}, {243, 8, 25}, {249, 3, 16}, {249, 6, 10}, {247, 1, 6}, {255, 255, 255}, {255, 255, 255}, {246, 21, 0}, {247, 32, 1}, {248, 42, 2}, {255, 254, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{209, 37, 93}, {211, 32, 87}, {213, 31, 79}, {215, 28, 73}, {220, 25, 69}, {224, 24, 61}, {222, 21, 57}, {255, 255, 255}, {255, 255, 255}, {237, 15, 40}, {237, 14, 33}, {239, 8, 24}, {243, 9, 22}, {249, 5, 15}, {255, 255, 255}, {255, 255, 255}, {246, 2, 2}, {249, 11, 0}, {250, 21, 2}, {248, 28, 2}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 34, 90}, {211, 34, 88}, {212, 31, 84}, {214, 31, 79}, {216, 29, 74}, {221, 26, 68}, {221, 25, 63}, {255, 255, 255}, {255, 255, 255}, {225, 18, 46}, {230, 16, 40}, {238, 16, 39}, {237, 11, 33}, {238, 11, 28}, {253, 255, 254}, {255, 255, 255}, {255, 255, 253}, {249, 4, 9}, {249, 3, 6}, {248, 3, 0}, {254, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{211, 39, 95}, {208, 34, 87}, {209, 32, 84}, {212, 32, 80}, {216, 33, 79}, {220, 29, 72}, {219, 27, 66}, {255, 255, 255}, {255, 255, 255}, {221, 22, 53}, {227, 19, 53}, {228, 18, 47}, {226, 16, 41}, {233, 17, 41}, {236, 14, 37}, {255, 255, 255}, {255, 255, 255}, {239, 7, 23}, {244, 8, 20}, {247, 5, 17}, {249, 5, 13}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{211, 39, 95}, {208, 35, 88}, {207, 33, 84}, {212, 34, 86}, {213, 31, 80}, {213, 31, 79}, {218, 31, 76}, {255, 255, 255}, {255, 255, 255}, {220, 24, 62}, {223, 25, 60}, {221, 23, 58}, {225, 21, 54}, {222, 22, 51}, {231, 20, 52}, {169, 42, 59}, {255, 255, 255}, {254, 255, 255}, {235, 15, 40}, {237, 15, 36}, {238, 12, 32}, {234, 13, 28}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{204, 35, 94}, {206, 32, 91}, {209, 35, 88}, {216, 39, 93}, {207, 30, 82}, {212, 31, 84}, {213, 31, 80}, {255, 255, 255}, {255, 255, 255}, {218, 26, 73}, {222, 32, 76}, {218, 27, 71}, {221, 30, 73}, {221, 26, 68}, {222, 27, 69}, {223, 24, 63}, {255, 255, 255}, {255, 255, 255}, {227, 18, 57}, {219, 20, 51}, {226, 21, 54}, {228, 23, 53}, {249, 247, 250}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{205, 36, 95}, {207, 35, 95}, {206, 34, 90}, {210, 37, 91}, {211, 33, 91}, {210, 36, 87}, {210, 32, 90}, {255, 255, 255}, {255, 255, 255}, {211, 32, 87}, {212, 34, 84}, {214, 32, 83}, {214, 34, 82}, {212, 32, 80}, {213, 31, 80}, {214, 32, 83}, {253, 255, 254}, {255, 255, 255}, {246, 242, 243}, {217, 30, 75}, {218, 28, 72}, {218, 28, 76}, {218, 22, 70}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 37, 96}, {204, 35, 94}, {206, 37, 96}, {205, 36, 93}, {207, 38, 95}, {204, 37, 91}, {204, 39, 95}, {255, 255, 255}, {255, 255, 255}, {205, 36, 95}, {206, 37, 94}, {206, 37, 94}, {209, 37, 95}, {206, 37, 94}, {206, 37, 96}, {208, 36, 94}, {255, 254, 255}, {255, 255, 255}, {242, 243, 245}, {205, 36, 95}, {210, 41, 100}, {207, 38, 97}, {206, 37, 94}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 38, 97}, {201, 36, 94}, {206, 38, 99}, {206, 40, 104}, {201, 39, 96}, {204, 41, 104}, {200, 40, 102}, {255, 255, 255}, {255, 255, 255}, {200, 40, 102}, {200, 41, 105}, {197, 41, 106}, {196, 41, 109}, {196, 39, 106}, {200, 41, 108}, {198, 44, 114}, {255, 255, 255}, {255, 255, 255}, {247, 245, 250}, {198, 47, 118}, {190, 43, 114}, {193, 47, 118}, {191, 46, 121}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{209, 40, 99}, {204, 39, 97}, {201, 36, 96}, {204, 40, 101}, {202, 39, 106}, {199, 40, 107}, {198, 38, 108}, {255, 255, 255}, {255, 255, 255}, {196, 45, 116}, {192, 45, 116}, {194, 48, 121}, {190, 45, 120}, {191, 46, 121}, {192, 46, 127}, {186, 48, 126}, {255, 255, 255}, {255, 255, 255}, {188, 52, 134}, {187, 51, 133}, {183, 49, 134}, {184, 56, 141}, {254, 253, 251}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{208, 40, 101}, {203, 40, 97}, {202, 38, 99}, {200, 40, 104}, {198, 41, 108}, {195, 40, 108}, {189, 46, 110}, {255, 255, 255}, {254, 254, 254}, {192, 47, 124}, {184, 47, 125}, {187, 52, 129}, {182, 49, 130}, {186, 52, 139}, {187, 53, 140}, {156, 71, 128}, {255, 255, 255}, {255, 255, 255}, {181, 60, 155}, {175, 60, 155}, {173, 59, 155}, {171, 59, 159}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{206, 41, 101}, {206, 42, 102}, {201, 41, 105}, {199, 40, 107}, {202, 48, 118}, {191, 44, 115}, {190, 57, 122}, {255, 255, 255}, {255, 255, 255}, {190, 53, 135}, {181, 53, 136}, {182, 56, 140}, {179, 57, 144}, {180, 55, 147}, {177, 59, 155}, {255, 255, 255}, {255, 255, 255}, {163, 61, 161}, {166, 64, 166}, {162, 66, 173}, {161, 68, 175}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{200, 35, 95}, {204, 40, 103}, {197, 40, 107}, {195, 44, 113}, {193, 47, 118}, {190, 45, 120}, {255, 208, 234}, {255, 255, 255}, {252, 255, 255}, {182, 55, 142}, {177, 57, 146}, {178, 57, 154}, {176, 61, 156}, {170, 65, 160}, {254, 252, 253}, {255, 255, 255}, {254, 254, 254}, {160, 71, 181}, {157, 73, 185}, {153, 74, 193}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}}, {{198, 34, 94}, {198, 40, 101}, {198, 41, 108}, {192, 45, 116}, {190, 46, 118}, {187, 49, 127}, {243, 245, 244}, {255, 255, 255}, {250, 253, 246}, {177, 58, 150}, {172, 58, 154}, {170, 60, 159}, {166, 64, 166}, {166, 70, 178}, {255, 255, 255}, {255, 255, 255}, {150, 70, 191}, {148, 74, 197}, {147, 77, 201}, {152, 78, 203}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{201, 37, 97}, {199, 40, 104}, {198, 44, 114}, {192, 46, 117}, {187, 44, 124}, {184, 53, 131}, {254, 254, 254}, {255, 255, 255}, {255, 251, 252}, {173, 61, 163}, {168, 61, 167}, {166, 67, 173}, {161, 69, 180}, {157, 73, 185}, {255, 255, 255}, {255, 255, 255}, {149, 79, 203}, {146, 74, 199}, {147, 75, 200}, {254, 255, 253}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{203, 39, 99}, {198, 39, 105}, {200, 46, 118}, {192, 48, 120}, {184, 47, 125}, {186, 54, 138}, {254, 254, 254}, {255, 255, 255}, {162, 67, 149}, {168, 63, 164}, {164, 67, 172}, {158, 69, 179}, {157, 74, 190}, {146, 91, 182}, {255, 255, 255}, {255, 255, 255}, {145, 75, 199}, {148, 78, 202}, {142, 72, 194}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{201, 37, 97}, {198, 39, 106}, {197, 45, 118}, {192, 47, 124}, {183, 52, 128}, {184, 58, 140}, {255, 255, 255}, {255, 255, 255}, {172, 64, 166}, {171, 72, 181}, {160, 73, 180}, {159, 76, 192}, {154, 78, 202}, {255, 236, 255}, {255, 255, 255}, {255, 255, 255}, {149, 77, 202}, {143, 73, 195}, {141, 71, 193}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 95}, {198, 41, 108}, {196, 46, 118}, {190, 49, 128}, {190, 54, 139}, {178, 53, 144}, {255, 255, 255}, {255, 255, 255}, {166, 67, 173}, {163, 70, 184}, {156, 73, 189}, {150, 76, 199}, {146, 76, 200}, {137, 89, 175}, {255, 255, 255}, {255, 255, 255}, {142, 72, 194}, {140, 70, 192}, {139, 70, 187}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 95}, {198, 41, 108}, {193, 47, 120}, {185, 50, 126}, {183, 54, 136}, {177, 54, 145}, {255, 255, 255}, {255, 255, 255}, {162, 69, 175}, {159, 73, 184}, {150, 75, 194}, {145, 79, 203}, {147, 77, 199}, {144, 74, 196}, {255, 255, 255}, {255, 255, 255}, {142, 72, 194}, {142, 73, 192}, {138, 69, 188}, {254, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 97}, {199, 39, 109}, {194, 48, 123}, {185, 52, 133}, {182, 54, 141}, {177, 60, 151}, {255, 255, 255}, {255, 255, 255}, {162, 70, 179}, {154, 71, 185}, {149, 75, 200}, {148, 76, 201}, {147, 77, 201}, {142, 74, 197}, {255, 255, 255}, {255, 255, 255}, {139, 69, 191}, {138, 69, 188}, {135, 66, 185}, {133, 64, 181}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{204, 39, 99}, {196, 39, 110}, {192, 47, 122}, {188, 52, 136}, {180, 56, 142}, {172, 63, 156}, {255, 255, 255}, {255, 255, 255}, {156, 72, 184}, {149, 74, 193}, {148, 78, 203}, {147, 77, 201}, {143, 73, 197}, {144, 73, 195}, {253, 253, 253}, {255, 255, 255}, {255, 255, 255}, {137, 68, 187}, {137, 68, 187}, {131, 63, 182}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}}, {{204, 40, 101}, {200, 44, 115}, {192, 47, 122}, {185, 52, 133}, {179, 56, 146}, {161, 73, 151}, {255, 255, 255}, {255, 255, 255}, {156, 72, 186}, {149, 75, 200}, {147, 77, 201}, {146, 76, 200}, {143, 73, 197}, {142, 72, 194}, {141, 73, 196}, {255, 255, 255}, {255, 255, 255}, {133, 69, 183}, {133, 63, 185}, {128, 63, 181}, {128, 61, 177}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{204, 40, 101}, {195, 41, 111}, {192, 47, 124}, {185, 53, 136}, {176, 56, 143}, {255, 250, 255}, {255, 255, 255}, {255, 255, 255}, {152, 71, 189}, {149, 77, 202}, {146, 76, 200}, {146, 76, 200}, {144, 74, 196}, {143, 73, 197}, {138, 68, 190}, {255, 247, 255}, {255, 255, 255}, {252, 255, 255}, {133, 62, 180}, {127, 62, 178}, {128, 61, 177}, {123, 58, 174}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{203, 38, 98}, {196, 42, 112}, {192, 47, 126}, {188, 52, 134}, {177, 57, 146}, {254, 255, 253}, {255, 255, 255}, {239, 243, 242}, {154, 75, 194}, {148, 78, 202}, {145, 75, 199}, {144, 74, 198}, {142, 73, 190}, {141, 71, 193}, {141, 71, 193}, {134, 68, 191}, {255, 255, 255}, {255, 255, 255}, {127, 64, 181}, {126, 59, 175}, {127, 59, 178}, {126, 59, 175}, {255, 255, 253}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{203, 38, 98}, {195, 41, 111}, {192, 47, 126}, {186, 53, 136}, {176, 56, 145}, {255, 255, 255}, {255, 255, 255}, {255, 248, 255}, {153, 75, 195}, {149, 79, 203}, {135, 66, 191}, {255, 255, 255}, {255, 255, 255}, {143, 68, 195}, {140, 69, 189}, {136, 67, 186}, {255, 255, 255}, {255, 255, 255}, {131, 62, 179}, {129, 62, 178}, {128, 61, 177}, {126, 59, 175}, {120, 57, 174}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{204, 39, 99}, {192, 41, 110}, {192, 46, 127}, {186, 49, 137}, {177, 57, 146}, {255, 255, 255}, {255, 255, 255}, {138, 78, 150}, {154, 77, 193}, {149, 81, 204}, {154, 80, 205}, {255, 255, 255}, {255, 255, 255}, {138, 78, 191}, {134, 66, 185}, {138, 69, 188}, {255, 255, 255}, {255, 255, 255}, {131, 61, 183}, {127, 59, 178}, {123, 56, 172}, {123, 56, 172}, {122, 55, 170}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{205, 40, 100}, {197, 43, 113}, {192, 47, 124}, {185, 52, 135}, {180, 57, 148}, {254, 255, 255}, {255, 255, 255}, {167, 75, 184}, {150, 72, 192}, {150, 80, 204}, {146, 76, 198}, {97, 57, 128}, {144, 88, 195}, {140, 70, 192}, {138, 69, 188}, {137, 68, 187}, {255, 255, 255}, {255, 255, 255}, {129, 60, 177}, {128, 61, 177}, {127, 60, 176}, {125, 58, 174}, {123, 55, 176}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{205, 40, 100}, {197, 43, 113}, {193, 48, 125}, {188, 52, 137}, {180, 57, 148}, {255, 255, 255}, {255, 255, 255}, {161, 72, 180}, {158, 80, 199}, {148, 80, 203}, {144, 74, 198}, {148, 78, 202}, {140, 72, 193}, {141, 71, 195}, {135, 70, 190}, {121, 77, 164}, {255, 255, 255}, {255, 255, 255}, {131, 63, 182}, {128, 61, 177}, {127, 62, 180}, {123, 56, 172}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{205, 41, 102}, {197, 44, 109}, {193, 48, 125}, {189, 51, 136}, {181, 61, 148}, {255, 255, 255}, {255, 255, 255}, {162, 67, 187}, {156, 77, 194}, {149, 77, 202}, {146, 76, 200}, {144, 74, 198}, {146, 72, 193}, {140, 70, 192}, {136, 68, 189}, {255, 255, 255}, {255, 255, 255}, {130, 65, 183}, {132, 63, 180}, {129, 62, 178}, {126, 59, 175}, {124, 59, 179}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{204, 40, 101}, {195, 40, 106}, {192, 47, 124}, {188, 55, 136}, {176, 56, 143}, {255, 255, 255}, {255, 255, 255}, {162, 68, 178}, {155, 71, 185}, {152, 78, 201}, {146, 76, 200}, {147, 73, 198}, {145, 75, 199}, {142, 72, 194}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {132, 64, 183}, {132, 65, 181}, {130, 62, 181}, {130, 63, 179}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{203, 38, 98}, {197, 40, 109}, {192, 47, 124}, {187, 49, 134}, {183, 54, 146}, {255, 255, 255}, {255, 255, 255}, {164, 68, 175}, {160, 72, 185}, {151, 76, 194}, {149, 79, 203}, {146, 76, 200}, {142, 72, 196}, {140, 72, 193}, {255, 255, 255}, {255, 255, 255}, {137, 65, 190}, {137, 68, 187}, {133, 64, 183}, {132, 64, 183}, {254, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 97}, {196, 41, 107}, {193, 47, 122}, {184, 49, 128}, {182, 55, 142}, {255, 255, 255}, {255, 255, 255}, {166, 65, 171}, {158, 71, 178}, {155, 76, 195}, {146, 74, 199}, {148, 76, 201}, {147, 77, 201}, {255, 253, 255}, {255, 255, 255}, {255, 255, 255}, {142, 73, 192}, {137, 67, 189}, {135, 66, 185}, {133, 64, 183}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 95}, {200, 45, 111}, {193, 45, 119}, {187, 50, 128}, {184, 52, 135}, {255, 255, 255}, {255, 255, 255}, {167, 65, 164}, {165, 69, 177}, {157, 73, 187}, {152, 77, 196}, {145, 77, 200}, {147, 75, 200}, {255, 255, 255}, {255, 255, 255}, {149, 82, 185}, {141, 71, 195}, {139, 70, 189}, {136, 67, 186}, {252, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 95}, {199, 42, 109}, {191, 41, 113}, {189, 48, 127}, {187, 53, 138}, {255, 255, 255}, {255, 255, 255}, {172, 64, 163}, {168, 65, 174}, {158, 68, 181}, {159, 76, 192}, {152, 78, 201}, {146, 76, 200}, {255, 255, 255}, {255, 255, 255}, {144, 73, 193}, {142, 72, 194}, {138, 68, 190}, {139, 69, 191}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 35, 91}, {211, 33, 81}, {219, 29, 73}, {223, 28, 70}, {221, 21, 57}, {229, 20, 51}, {233, 15, 40}, {255, 255, 255}, {255, 255, 255}, {247, 5, 17}, {250, 4, 9}, {250, 5, 4}, {250, 12, 0}, {255, 218, 217}, {255, 255, 255}, {255, 255, 255}, {248, 62, 3}, {248, 74, 1}, {250, 83, 2}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};
const uint8_t colorsForStrip2[36][35][3] PROGMEM ={{{204, 39, 99}, {200, 41, 107}, {196, 45, 114}, {194, 48, 121}, {184, 49, 125}, {255, 255, 255}, {255, 255, 255}, {177, 59, 153}, {170, 59, 161}, {168, 63, 164}, {165, 65, 177}, {157, 69, 179}, {157, 74, 188}, {255, 255, 255}, {255, 255, 255}, {153, 79, 204}, {145, 75, 199}, {145, 75, 199}, {142, 72, 194}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{203, 38, 98}, {200, 40, 104}, {198, 41, 112}, {192, 46, 119}, {190, 52, 129}, {255, 255, 255}, {255, 255, 255}, {182, 59, 149}, {178, 59, 153}, {171, 59, 157}, {171, 63, 165}, {165, 66, 172}, {161, 69, 178}, {255, 255, 255}, {255, 255, 255}, {149, 83, 183}, {147, 77, 201}, {148, 78, 200}, {146, 76, 200}, {255, 255, 253}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 97}, {202, 38, 101}, {201, 42, 109}, {193, 43, 115}, {192, 48, 120}, {255, 255, 255}, {254, 255, 255}, {183, 53, 141}, {177, 57, 146}, {178, 59, 151}, {175, 61, 157}, {170, 64, 164}, {165, 63, 165}, {255, 250, 255}, {255, 255, 255}, {255, 255, 255}, {152, 74, 193}, {152, 78, 201}, {147, 77, 201}, {148, 78, 200}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{203, 38, 98}, {202, 39, 102}, {198, 41, 108}, {197, 43, 115}, {197, 40, 121}, {255, 255, 255}, {255, 255, 255}, {184, 52, 135}, {185, 53, 137}, {182, 56, 140}, {177, 57, 144}, {179, 58, 151}, {176, 62, 158}, {170, 66, 161}, {255, 255, 255}, {255, 255, 255}, {162, 68, 180}, {159, 71, 181}, {159, 72, 185}, {152, 73, 190}, {254, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{205, 40, 100}, {204, 42, 101}, {200, 39, 106}, {196, 39, 108}, {204, 48, 119}, {255, 255, 255}, {253, 255, 254}, {190, 47, 127}, {186, 49, 127}, {179, 46, 127}, {186, 54, 137}, {180, 53, 140}, {177, 54, 144}, {182, 59, 149}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {167, 61, 161}, {163, 62, 166}, {164, 65, 171}, {162, 66, 176}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 42, 102}, {203, 41, 98}, {205, 41, 104}, {199, 40, 106}, {197, 44, 111}, {255, 255, 255}, {254, 255, 255}, {192, 45, 116}, {193, 47, 122}, {190, 48, 122}, {184, 47, 125}, {183, 48, 125}, {186, 49, 131}, {185, 51, 138}, {180, 52, 137}, {255, 255, 255}, {255, 255, 255}, {181, 56, 147}, {175, 58, 149}, {174, 59, 154}, {174, 63, 158}, {173, 61, 163}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{208, 40, 99}, {205, 37, 98}, {202, 37, 97}, {202, 40, 100}, {194, 40, 104}, {255, 255, 255}, {255, 255, 255}, {199, 42, 109}, {195, 44, 113}, {193, 42, 113}, {193, 46, 117}, {193, 47, 118}, {192, 46, 121}, {192, 47, 122}, {190, 48, 124}, {254, 254, 254}, {255, 255, 255}, {254, 254, 254}, {182, 49, 130}, {187, 54, 137}, {185, 53, 137}, {182, 53, 135}, {253, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 40, 96}, {209, 40, 99}, {205, 40, 100}, {203, 38, 98}, {208, 39, 98}, {255, 255, 255}, {255, 255, 255}, {201, 37, 97}, {201, 38, 101}, {201, 41, 105}, {200, 41, 105}, {199, 40, 106}, {200, 39, 107}, {199, 40, 107}, {200, 43, 114}, {195, 40, 108}, {255, 255, 255}, {255, 255, 255}, {194, 45, 113}, {194, 44, 115}, {195, 45, 117}, {196, 45, 116}, {198, 42, 116}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 37, 94}, {209, 40, 97}, {205, 36, 93}, {207, 38, 93}, {206, 37, 94}, {255, 255, 255}, {255, 255, 255}, {207, 38, 95}, {207, 38, 95}, {206, 39, 95}, {207, 38, 93}, {205, 36, 93}, {206, 37, 94}, {207, 38, 95}, {207, 38, 95}, {208, 45, 102}, {255, 255, 255}, {255, 255, 255}, {209, 37, 97}, {205, 38, 94}, {205, 37, 96}, {206, 37, 94}, {207, 38, 97}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{203, 34, 91}, {207, 38, 93}, {206, 34, 90}, {209, 36, 90}, {209, 34, 93}, {255, 255, 255}, {255, 255, 255}, {213, 36, 88}, {209, 32, 86}, {210, 31, 86}, {216, 38, 88}, {215, 35, 83}, {213, 31, 80}, {214, 32, 81}, {213, 31, 80}, {211, 33, 83}, {255, 255, 255}, {255, 255, 255}, {216, 28, 78}, {216, 29, 72}, {218, 31, 74}, {221, 27, 77}, {219, 28, 69}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{202, 33, 88}, {206, 38, 90}, {206, 34, 90}, {211, 34, 88}, {207, 33, 82}, {255, 255, 255}, {255, 255, 255}, {214, 33, 78}, {210, 27, 75}, {216, 29, 74}, {217, 30, 73}, {220, 29, 73}, {220, 27, 71}, {220, 25, 67}, {221, 26, 68}, {253, 253, 253}, {255, 255, 255}, {249, 249, 249}, {222, 22, 58}, {227, 23, 58}, {230, 21, 53}, {231, 20, 52}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{207, 35, 91}, {206, 33, 87}, {211, 32, 88}, {215, 37, 89}, {209, 33, 80}, {255, 255, 255}, {255, 255, 255}, {220, 28, 79}, {222, 27, 69}, {223, 24, 65}, {223, 25, 61}, {224, 22, 60}, {222, 21, 55}, {224, 21, 51}, {230, 19, 51}, {254, 255, 255}, {255, 255, 255}, {231, 15, 39}, {234, 14, 39}, {235, 13, 36}, {240, 14, 34}, {236, 13, 31}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{207, 35, 91}, {208, 34, 85}, {211, 33, 85}, {212, 32, 80}, {215, 32, 80}, {255, 255, 255}, {255, 255, 255}, {219, 24, 64}, {225, 24, 60}, {226, 22, 59}, {225, 20, 53}, {228, 17, 49}, {230, 20, 47}, {234, 17, 46}, {255, 255, 253}, {255, 255, 255}, {255, 255, 255}, {240, 8, 22}, {244, 8, 18}, {243, 6, 16}, {249, 5, 13}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{208, 36, 92}, {208, 31, 86}, {212, 34, 82}, {212, 29, 75}, {215, 28, 71}, {255, 255, 255}, {255, 255, 255}, {231, 19, 59}, {227, 17, 52}, {229, 20, 52}, {232, 18, 44}, {236, 14, 37}, {242, 12, 38}, {241, 13, 28}, {255, 255, 255}, {255, 255, 255}, {245, 6, 11}, {249, 4, 9}, {250, 4, 9}, {245, 2, 0}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}}, {{208, 36, 92}, {211, 32, 87}, {212, 32, 80}, {220, 30, 74}, {218, 25, 69}, {255, 255, 255}, {255, 255, 255}, {225, 29, 65}, {229, 19, 46}, {236, 17, 39}, {238, 12, 32}, {240, 12, 27}, {246, 12, 25}, {255, 236, 237}, {255, 255, 255}, {254, 255, 255}, {246, 2, 2}, {249, 11, 0}, {247, 20, 1}, {253, 29, 4}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{208, 36, 92}, {210, 32, 84}, {213, 31, 80}, {220, 29, 73}, {222, 26, 64}, {255, 252, 252}, {255, 255, 255}, {150, 37, 55}, {236, 14, 35}, {239, 10, 31}, {243, 8, 25}, {246, 9, 19}, {249, 6, 12}, {255, 255, 255}, {255, 255, 255}, {202, 35, 26}, {246, 21, 0}, {248, 34, 0}, {247, 44, 1}, {254, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{208, 36, 92}, {213, 35, 85}, {215, 30, 74}, {219, 24, 66}, {225, 25, 61}, {254, 254, 254}, {255, 255, 255}, {248, 248, 246}, {239, 10, 33}, {243, 6, 22}, {245, 6, 12}, {249, 4, 9}, {248, 4, 3}, {255, 255, 255}, {255, 255, 255}, {250, 32, 4}, {249, 44, 0}, {246, 50, 0}, {248, 64, 0}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 34, 90}, {215, 33, 82}, {220, 30, 76}, {221, 29, 70}, {224, 23, 57}, {255, 251, 250}, {255, 255, 255}, {255, 255, 255}, {241, 9, 22}, {246, 9, 15}, {249, 4, 9}, {250, 2, 2}, {248, 15, 1}, {255, 255, 255}, {255, 255, 255}, {252, 54, 5}, {250, 62, 0}, {248, 76, 2}, {248, 84, 0}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{208, 35, 91}, {213, 31, 80}, {215, 28, 73}, {220, 24, 62}, {222, 21, 55}, {141, 33, 46}, {255, 255, 255}, {255, 255, 255}, {247, 7, 18}, {245, 2, 4}, {249, 3, 4}, {250, 14, 3}, {249, 28, 2}, {255, 255, 255}, {255, 255, 255}, {247, 63, 0}, {248, 76, 0}, {248, 88, 0}, {247, 101, 2}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 34, 90}, {215, 33, 82}, {218, 27, 70}, {225, 24, 60}, {229, 21, 55}, {229, 16, 44}, {255, 255, 255}, {254, 254, 254}, {249, 8, 14}, {248, 2, 7}, {247, 9, 0}, {248, 26, 3}, {248, 38, 3}, {254, 255, 255}, {255, 255, 255}, {214, 94, 33}, {249, 94, 1}, {250, 107, 3}, {245, 116, 0}, {255, 254, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 33, 89}, {213, 31, 80}, {224, 29, 73}, {225, 24, 58}, {230, 19, 51}, {233, 15, 40}, {255, 255, 255}, {255, 255, 255}, {249, 4, 9}, {250, 4, 5}, {250, 17, 3}, {249, 30, 2}, {247, 46, 2}, {255, 243, 229}, {255, 255, 255}, {254, 254, 254}, {249, 106, 2}, {246, 117, 0}, {247, 133, 0}, {249, 151, 2}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{208, 33, 88}, {213, 31, 80}, {224, 28, 74}, {226, 22, 59}, {231, 18, 50}, {236, 13, 32}, {255, 255, 255}, {255, 255, 255}, {249, 3, 6}, {251, 10, 1}, {249, 24, 2}, {246, 40, 1}, {247, 54, 0}, {246, 69, 2}, {255, 255, 255}, {255, 255, 255}, {247, 113, 0}, {249, 132, 1}, {250, 148, 1}, {246, 163, 0}, {253, 255, 250}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}}, {{208, 34, 87}, {214, 30, 80}, {220, 26, 63}, {225, 21, 56}, {227, 17, 46}, {234, 11, 30}, {255, 255, 255}, {255, 255, 255}, {247, 1, 2}, {247, 14, 0}, {250, 31, 1}, {248, 47, 3}, {249, 65, 3}, {249, 79, 4}, {255, 255, 253}, {255, 255, 255}, {255, 255, 255}, {250, 143, 1}, {248, 158, 0}, {250, 174, 2}, {248, 189, 1}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{209, 35, 88}, {211, 27, 77}, {217, 22, 64}, {227, 21, 59}, {232, 19, 47}, {236, 10, 30}, {255, 255, 255}, {255, 255, 255}, {253, 1, 0}, {248, 18, 2}, {248, 33, 2}, {249, 51, 2}, {252, 68, 4}, {250, 85, 3}, {247, 99, 1}, {255, 255, 255}, {255, 255, 255}, {243, 151, 4}, {250, 167, 1}, {248, 181, 4}, {250, 196, 2}, {251, 203, 5}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{211, 36, 93}, {212, 29, 75}, {219, 24, 64}, {224, 21, 51}, {230, 16, 40}, {238, 13, 31}, {253, 254, 255}, {255, 255, 255}, {248, 5, 9}, {248, 23, 3}, {248, 35, 1}, {249, 54, 0}, {249, 72, 4}, {251, 89, 4}, {249, 106, 2}, {220, 121, 38}, {255, 255, 255}, {255, 255, 255}, {247, 171, 0}, {248, 188, 2}, {248, 199, 1}, {250, 208, 2}, {252, 255, 248}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}}, {{210, 32, 90}, {216, 33, 79}, {223, 28, 70}, {225, 19, 55}, {230, 16, 40}, {238, 12, 32}, {255, 255, 255}, {255, 255, 255}, {229, 131, 132}, {248, 23, 1}, {250, 43, 1}, {247, 57, 0}, {247, 73, 0}, {247, 89, 0}, {246, 105, 0}, {247, 128, 2}, {255, 255, 255}, {255, 255, 255}, {247, 176, 0}, {247, 192, 1}, {249, 202, 2}, {250, 210, 1}, {251, 215, 5}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}}, {{207, 32, 89}, {212, 26, 73}, {220, 28, 69}, {224, 18, 54}, {230, 17, 39}, {233, 7, 27}, {245, 243, 244}, {255, 255, 255}, {255, 255, 253}, {248, 24, 0}, {247, 42, 0}, {249, 59, 1}, {248, 76, 0}, {244, 89, 0}, {246, 105, 0}, {250, 127, 0}, {255, 255, 255}, {255, 255, 255}, {248, 176, 3}, {250, 191, 0}, {247, 201, 1}, {245, 209, 0}, {249, 216, 1}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{209, 31, 89}, {216, 33, 79}, {221, 25, 65}, {227, 21, 57}, {230, 16, 40}, {238, 13, 29}, {253, 244, 245}, {255, 255, 255}, {254, 254, 255}, {247, 22, 0}, {248, 41, 0}, {249, 59, 1}, {246, 74, 0}, {250, 91, 0}, {246, 103, 0}, {250, 126, 4}, {255, 255, 255}, {255, 255, 255}, {245, 178, 3}, {247, 192, 1}, {247, 201, 1}, {251, 211, 2}, {250, 216, 7}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 32, 89}, {210, 27, 73}, {221, 26, 68}, {222, 21, 55}, {231, 18, 40}, {239, 12, 32}, {217, 20, 29}, {255, 255, 255}, {255, 255, 255}, {248, 17, 0}, {252, 39, 5}, {248, 55, 0}, {251, 73, 3}, {249, 88, 0}, {249, 106, 2}, {248, 121, 6}, {255, 255, 255}, {255, 255, 255}, {247, 171, 0}, {250, 189, 3}, {248, 199, 1}, {249, 208, 2}, {254, 255, 255}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 34, 88}, {216, 33, 79}, {221, 26, 68}, {226, 22, 59}, {229, 16, 44}, {237, 11, 31}, {245, 8, 24}, {255, 255, 255}, {255, 253, 254}, {248, 17, 0}, {249, 35, 1}, {248, 51, 0}, {250, 66, 2}, {249, 84, 2}, {247, 99, 0}, {255, 250, 230}, {255, 255, 255}, {255, 254, 255}, {246, 168, 0}, {249, 183, 1}, {248, 195, 1}, {250, 204, 5}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 33, 87}, {216, 33, 81}, {223, 28, 70}, {219, 18, 52}, {229, 16, 44}, {235, 13, 28}, {229, 5, 13}, {255, 255, 255}, {255, 255, 255}, {249, 16, 2}, {249, 32, 1}, {249, 47, 1}, {247, 63, 1}, {248, 76, 2}, {249, 94, 1}, {255, 255, 255}, {255, 255, 255}, {244, 143, 9}, {246, 156, 0}, {250, 174, 2}, {247, 187, 1}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{209, 36, 92}, {212, 30, 79}, {220, 25, 69}, {223, 23, 59}, {231, 18, 50}, {238, 15, 34}, {246, 7, 26}, {255, 255, 255}, {255, 255, 255}, {245, 9, 0}, {249, 24, 2}, {248, 39, 0}, {247, 56, 1}, {246, 69, 1}, {255, 255, 255}, {255, 255, 255}, {255, 255, 255}, {247, 133, 1}, {251, 149, 4}, {250, 164, 1}, {254, 255, 253}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 35, 91}, {214, 31, 79}, {219, 26, 70}, {222, 22, 59}, {228, 18, 47}, {234, 16, 40}, {235, 6, 26}, {255, 255, 255}, {255, 255, 255}, {251, 0, 0}, {249, 16, 0}, {249, 32, 1}, {248, 48, 0}, {248, 59, 1}, {255, 255, 255}, {255, 255, 255}, {247, 105, 3}, {247, 118, 1}, {245, 131, 0}, {248, 150, 1}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{207, 35, 91}, {215, 33, 81}, {222, 29, 74}, {223, 25, 61}, {227, 18, 49}, {231, 15, 39}, {237, 11, 33}, {255, 255, 255}, {255, 255, 255}, {250, 1, 5}, {250, 9, 2}, {248, 22, 0}, {250, 37, 3}, {247, 51, 1}, {255, 255, 255}, {255, 255, 255}, {249, 94, 4}, {250, 104, 3}, {247, 118, 0}, {253, 254, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{206, 34, 92}, {212, 32, 80}, {218, 26, 73}, {223, 24, 63}, {226, 21, 52}, {232, 19, 49}, {237, 13, 39}, {255, 255, 255}, {255, 255, 255}, {252, 8, 10}, {247, 1, 2}, {248, 12, 0}, {249, 25, 0}, {206, 60, 37}, {255, 255, 255}, {255, 255, 255}, {250, 78, 2}, {249, 94, 4}, {251, 103, 3}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, {{202, 37, 95}, {200, 41, 108}, {187, 40, 110}, {193, 48, 127}, {184, 53, 133}, {255, 255, 255}, {255, 255, 255}, {172, 58, 156}, {168, 61, 165}, {163, 66, 173}, {161, 73, 185}, {155, 71, 192}, {153, 79, 202}, {255, 255, 255}, {255, 255, 255}, {148, 76, 201}, {144, 74, 198}, {150, 76, 199}, {134, 64, 186}, {255, 255, 255}, {255, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};
