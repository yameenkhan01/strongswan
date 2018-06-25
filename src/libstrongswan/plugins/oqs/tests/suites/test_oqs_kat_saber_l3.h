	{
		.mechanism = QSKE_SABER_L3,
		.count = 0,
		.seed = chunk_from_chars(
			0x06,0x15,0x50,0x23,0x4D,0x15,0x8C,0x5E,0xC9,0x55,
			0x95,0xFE,0x04,0xEF,0x7A,0x25,0x76,0x7F,0x2E,0x24,
			0xCC,0x2B,0xC4,0x79,0xD0,0x9D,0x86,0xDC,0x9A,0xBC,
			0xFD,0xE7,0x05,0x6A,0x8C,0x26,0x6F,0x9E,0xF9,0x7E,
			0xD0,0x85,0x41,0xDB,0xD2,0xE1,0xFF,0xA1),
		.pk = chunk_from_chars(
			0x68,0x28,0xD4,0x81,0x0C,0x86,0x08,0xFB,0x7D,0x48,
			0x8C,0xD6,0x5C,0xC1,0x1B,0x31,0xE4,0x66,0x7B,0xD3,
			0x64,0x20,0x3F,0xF5,0xDE,0x9E,0x55,0xD1,0xCE,0x8A,
			0x42,0x93,0x0C,0x47,0x76,0x0C,0xE1,0x49,0x7D,0xC8,
			0x2C,0x0B,0x9B,0x78,0xF8,0xBD,0x71,0x9B,0x9C,0x1A,
			0x37,0xDC,0x3E,0x1F,0x39,0x9C,0xB7,0x11,0xC4,0x1A,
			0x2E,0x87,0x97,0x64,0x20,0xB9,0xAD,0xC2,0x76,0x4B,
			0x07,0xD6,0x21,0xCB,0x8B,0x4A,0xE7,0xC1,0x2F,0x84,
			0xDF,0xE0,0xD6,0xDA,0xCC,0x27,0x4C,0x42,0x57,0x76,
			0x71,0xFF,0xC4,0xE4,0xFD,0xA1,0x07,0xD2,0x42,0x48, /* 100 */

			0x7A,0xEE,0xB5,0x0B,0xA3,0x26,0x52,0xEA,0x71,0xCF,
			0xB0,0x9B,0x5A,0x23,0x9F,0x07,0x45,0x70,0x73,0x35,
			0x6C,0x79,0x96,0x64,0x06,0x2F,0x94,0x56,0xB9,0x49,
			0x54,0xBF,0x1A,0x89,0xFE,0x0B,0xAF,0x75,0xAF,0x7A,
			0x45,0x6B,0x6E,0x56,0xB5,0x03,0x3A,0x96,0xC9,0xAD,
			0xCD,0xA1,0xB5,0x27,0x66,0xBE,0x1A,0xED,0xBE,0x10,
			0x97,0xAC,0xB2,0xF0,0x94,0x0E,0xB5,0x7F,0x69,0x72,
			0x9A,0xAF,0x1A,0xCF,0x28,0x23,0x63,0x22,0xCE,0x1A,
			0x93,0x89,0xEE,0x0F,0x1C,0xA3,0x6D,0x22,0x44,0xD2,
			0x06,0xAB,0x0B,0xC0,0xF1,0xCD,0xF8,0x40,0xFE,0xD7, /* 200 */

			0xFC,0x75,0xF7,0xF0,0xCF,0x20,0x2D,0xA4,0x09,0x32,
			0xA6,0xB3,0x28,0x6D,0xD7,0x08,0xA0,0x39,0xBA,0xD4,
			0xDB,0x31,0x97,0x31,0x89,0x8A,0xC4,0xC6,0xAF,0xB1,
			0xF3,0xCE,0xA0,0x48,0x64,0x5E,0x0B,0x84,0x40,0xCB,
			0x79,0x5A,0xFE,0x38,0xEA,0x2B,0x9D,0x8A,0x42,0x2D,
			0xC4,0xE2,0xCC,0xA0,0x11,0xF7,0x4B,0x84,0x95,0xD6,
			0x19,0xEC,0x74,0xF7,0x50,0x2B,0x9B,0x15,0xA1,0x76,
			0x98,0x2A,0xFE,0x83,0xB5,0x29,0x19,0x5B,0x9F,0xF5,
			0x58,0xD6,0xBB,0x3D,0x02,0x20,0xA3,0x1E,0xBB,0x03,
			0x52,0x8D,0xE6,0xAB,0x39,0xD1,0xB5,0x63,0x75,0x1A, /* 300 */

			0x5F,0x4F,0x73,0xFD,0x98,0xC5,0x5C,0xF5,0xAC,0x8D,
			0xF2,0x25,0xB2,0xA2,0xA9,0xFA,0xC3,0xD7,0xC5,0x61,
			0x2A,0xDB,0x24,0x93,0x18,0xA1,0x2B,0x33,0x68,0x33,
			0x8E,0x8B,0x03,0x07,0x9A,0x26,0xDD,0x32,0xAA,0x89,
			0xDA,0x2A,0xE1,0x69,0xA5,0x40,0x71,0xBB,0x6D,0x36,
			0x60,0x90,0x66,0x58,0x78,0x21,0x56,0x6F,0x45,0xEC,
			0xF1,0x82,0xF3,0x46,0x7E,0x3B,0x37,0xDE,0xDD,0xA6,
			0xD3,0xF6,0xD1,0x6E,0xBE,0x63,0x51,0x1D,0xC4,0x1B,
			0x06,0x79,0x1E,0xC0,0x04,0x72,0x3C,0xB8,0xF7,0xD0,
			0x86,0xD9,0xC5,0xDB,0x2D,0x58,0x37,0xCD,0xF4,0x92, /* 400 */

			0x43,0xF9,0x59,0x38,0xBC,0x58,0xE5,0x5E,0x52,0xF6,
			0x7A,0x15,0x63,0x68,0xD4,0x5A,0x43,0xAD,0x0B,0x41,
			0x76,0xDE,0x2F,0x05,0xAE,0x0E,0x4B,0xC4,0x02,0xF4,
			0x5E,0x7F,0xBD,0xE9,0x14,0xC1,0xCB,0x56,0x68,0x97,
			0x09,0x61,0xBE,0x53,0xB2,0xD8,0x34,0x50,0x74,0x5E,
			0x98,0xE7,0x00,0xA8,0x6B,0x7F,0x30,0xB1,0x13,0x91,
			0x36,0x6F,0xEF,0xE7,0x5E,0x7F,0x7B,0xE0,0xB1,0x79,
			0x88,0x7B,0x5E,0x29,0xBB,0xEA,0x0E,0xA5,0x23,0x2F,
			0x0A,0xD9,0xDA,0xA7,0x4C,0x90,0x10,0x78,0xDD,0x1C,
			0xE3,0xB2,0x4C,0xE7,0x7A,0xEB,0x3E,0x15,0xF8,0x37, /* 500 */

			0x2E,0xEC,0x90,0x67,0x08,0xEF,0xD0,0xDE,0xFB,0xE8,
			0x3F,0xA4,0x07,0x4B,0x41,0x9B,0xFC,0x1D,0x8A,0x47,
			0x47,0x94,0x36,0xE7,0x7F,0x17,0x91,0xFF,0x28,0x70,
			0x84,0x10,0x9B,0xC2,0x5E,0xDA,0x06,0xE2,0xFC,0x47,
			0x93,0x36,0xBE,0xA2,0x89,0xFF,0x06,0xBD,0x9C,0xD6,
			0x94,0xDF,0x2F,0x19,0x0B,0xB7,0xDB,0xE9,0xDD,0x10,
			0xEC,0x69,0x7B,0x63,0x6C,0xB9,0x40,0x34,0xE3,0x11,
			0x11,0x97,0x2E,0x50,0x34,0x80,0x4F,0x30,0xA8,0x46,
			0x8D,0x6A,0x93,0xC1,0x99,0xD9,0x7F,0xE5,0xA7,0x97,
			0x8C,0x3F,0xCA,0x52,0x61,0x89,0x5B,0x80,0x98,0x11, /* 600 */

			0xD1,0x16,0x45,0xBB,0xCB,0x21,0xDB,0x73,0x26,0x9A,
			0xFB,0xA1,0xDF,0x93,0x9D,0x99,0xCF,0x22,0x66,0x10,
			0xB3,0x27,0xBF,0x62,0x73,0x35,0x1E,0x81,0xBD,0xF0,
			0x0F,0x1F,0x9A,0x02,0xA6,0x3A,0x0D,0x6F,0x88,0x24,
			0x8D,0xC0,0x19,0x04,0xC5,0x3A,0xE1,0x6C,0x94,0xB9,
			0x7B,0x43,0xE2,0x87,0xA9,0x12,0x7A,0xF5,0xDE,0x75,
			0xD8,0x23,0x4D,0xDE,0xF2,0xB5,0xB7,0xD4,0xF9,0x82,
			0x65,0x0D,0xB4,0xCF,0x78,0x15,0x9B,0x80,0xFC,0xB8,
			0x7B,0x9B,0xFA,0x76,0xF9,0x8A,0x0F,0x53,0x23,0xD8,
			0x5D,0xF0,0x4E,0x6D,0x0C,0x2E,0x05,0x82,0x16,0x6A, /* 700 */

			0x2D,0x22,0x4D,0x48,0xD4,0xFE,0xF4,0x10,0x8D,0x43,
			0x4F,0xCF,0xB8,0xEC,0x15,0x45,0xC9,0x10,0xB1,0x7F,
			0x57,0x46,0xE4,0x84,0x1D,0xD8,0x7D,0x97,0x59,0x9C,
			0x5D,0xAB,0x6B,0x43,0xF9,0xA5,0xC1,0x92,0x0C,0x42,
			0x32,0xB6,0xEE,0x1C,0x91,0x0E,0x9A,0x1F,0xD8,0xB9,
			0x36,0xBD,0xC3,0x85,0x6C,0xE7,0xE8,0x3E,0xEA,0x96,
			0xD5,0xFC,0xBB,0xCE,0x85,0x52,0xA5,0xE1,0x42,0xB6,
			0xD7,0x40,0xE0,0xF4,0x70,0xEB,0x86,0xF4,0xA8,0xD2,
			0xDE,0x5D,0x94,0x44,0xB6,0x2A,0x0B,0xEB,0x07,0xE3,
			0xAD,0xB2,0xAF,0xC5,0xE2,0x0F,0xEE,0x75,0x51,0xB2, /* 800 */

			0x84,0x98,0x17,0x3A,0x3B,0xBE,0x78,0xE3,0x2A,0x88,
			0xE4,0xC7,0xF0,0x05,0x33,0xEB,0x69,0x61,0xF8,0xA9,
			0x65,0x3D,0x38,0xAB,0x80,0x29,0xD1,0x18,0x80,0xB5,
			0xEB,0xA3,0x87,0xED,0xC2,0x21,0x31,0xB1,0xF9,0x41,
			0x1D,0x66,0x78,0xA3,0x1D,0x83,0x4B,0x75,0x83,0x0B,
			0xF8,0x14,0x6C,0x9F,0x2C,0x01,0xD2,0xE7,0x03,0x1D,
			0xFA,0x9F,0xCC,0x21,0xC1,0xBB,0x9C,0xA5,0x73,0x50,
			0x28,0xD3,0xE9,0x4C,0x7D,0x2F,0x62,0xE7,0x8F,0xDD,
			0x0A,0x24,0xA2,0x4F,0xC4,0x4E,0xAA,0xAA,0x69,0x46,
			0x8E,0x27,0xB5,0xDB,0x5C,0xCA,0x7D,0xC5,0x87,0x3D, /* 900 */

			0xD9,0x2E,0xFE,0xBC,0x4F,0x39,0x92,0x2C,0xDF,0x6A,
			0x28,0x30,0xBD,0x30,0xAD,0xDE,0xBB,0x29,0x5D,0x87,
			0x57,0xCF,0x39,0xFF,0x13,0x14,0x6B,0xA8,0x51,0x5B,
			0x20,0x90,0xFA,0x11,0x03,0x7C,0x0F,0x17,0xC0,0xED,
			0xC5,0xDB,0xDB,0x0C,0x18,0x2B,0x08,0x5C,0x19,0xE0,
			0xD2,0xD1,0x1F,0xB7,0xE2,0x9E,0x54,0xC8,0x0F,0xF6,
			0xE9,0xF2,0xAC,0x32,0x93,0x54,0x89,0xC7,0xED,0xD0,
			0x64,0xBB,0xA9,0xA7,0x8C,0xEA,0xB0,0x9D,0x29,0xE0,
			0x20,0xC0,0xEA,0x8F,0x1C,0x70,0xD3,0x3A,0x81,0x38,
			0x89,0xC3),
		.ct = chunk_from_chars(
			0x63,0xBA,0xC8,0x5A,0xB9,0x9F,0xE7,0x9A,0x0B,0x4E,
			0x7C,0xF2,0xF3,0x86,0x41,0xAE,0x83,0x9B,0x37,0x39,
			0xF4,0x10,0x3E,0xFE,0x80,0x3D,0x6E,0x28,0xF1,0x9B,
			0x42,0x71,0xBD,0x6C,0x49,0x04,0x95,0xD0,0x89,0x9D,
			0x79,0x32,0xCD,0x25,0x9D,0x7E,0x3B,0x17,0xA6,0x29,
			0xE8,0x73,0x00,0x7F,0xAB,0xD0,0xD5,0x22,0xA5,0xCD,
			0x9B,0xA0,0xE4,0x42,0x79,0xFB,0x80,0x72,0x31,0x5C,
			0x56,0x2D,0x61,0x3F,0xB5,0x41,0x3E,0x71,0xE5,0x21,
			0x4D,0x6D,0x44,0x5A,0x50,0xE2,0x91,0xC0,0x21,0xFC,
			0xBF,0x6E,0xE6,0x94,0x59,0xA3,0x47,0x92,0x8E,0x0E, /* 100 */

			0x14,0xD3,0x2B,0xA8,0x13,0xC5,0xFD,0xF8,0xBA,0x8C,
			0x14,0x91,0xDF,0x34,0xE2,0xE0,0xC9,0x2F,0x81,0xF3,
			0x06,0x1E,0x39,0x47,0x64,0x0D,0xD7,0xE6,0xB8,0x4C,
			0x2E,0xA9,0xCB,0xF2,0x06,0xF6,0x9C,0x13,0x35,0x89,
			0x0E,0x31,0x89,0x1D,0x93,0xD3,0x2C,0x09,0x04,0x7D,
			0xC4,0x0A,0x79,0x25,0x4F,0x4D,0x85,0x3C,0x10,0xCB,
			0x5E,0xC6,0x48,0xE8,0xB2,0x74,0x3B,0x55,0x33,0xE1,
			0x7B,0x70,0x76,0x49,0xAA,0xCC,0xEF,0x5D,0x60,0xFC,
			0x72,0xD8,0x08,0x5A,0xD7,0xD5,0xEC,0x27,0xCE,0x68,
			0xCF,0x4C,0x59,0xD2,0xB6,0xDE,0xF2,0x26,0x92,0x52, /* 200 */

			0xED,0x76,0xDF,0x3B,0x60,0x48,0x6F,0x06,0x0C,0xA2,
			0xA9,0xC5,0xED,0x8D,0xD7,0x31,0x86,0x31,0xBF,0x7C,
			0x88,0xC5,0x8C,0x0F,0xB1,0x4E,0xAD,0xC0,0x2A,0x71,
			0xEE,0xBD,0x01,0xA9,0x6C,0xB9,0xD3,0x5D,0xD3,0x0F,
			0xF2,0x74,0x05,0xBA,0x2F,0xAF,0x96,0xC3,0xBE,0x65,
			0x38,0x9D,0x04,0x82,0xED,0x4A,0xBF,0x2A,0x93,0xEF,
			0x4E,0xD9,0x50,0xAF,0x8C,0x8B,0x78,0x42,0xE5,0xCD,
			0x81,0xF7,0x32,0x45,0x53,0x62,0xE9,0x38,0x4D,0x57,
			0x79,0xEC,0xD0,0xB3,0xC6,0x4A,0x05,0xD9,0x24,0xF5,
			0x66,0xEB,0xD4,0xA0,0xB1,0x22,0x0D,0x99,0xB2,0x5C, /* 300 */

			0x79,0x40,0xF8,0xED,0xCE,0x06,0x68,0xB6,0x07,0xE8,
			0xC7,0xE7,0x28,0xB8,0xEF,0xCB,0xFD,0x14,0x48,0xDF,
			0x6E,0x41,0xFB,0xCF,0xB3,0xC1,0xDE,0x68,0x42,0x58,
			0x6C,0xD0,0xDE,0x1F,0x0F,0xD7,0xF2,0xE8,0x7B,0x37,
			0x49,0x46,0xA1,0xA9,0x46,0x82,0x17,0x56,0x91,0x44,
			0xB9,0x19,0x2E,0x5E,0xC5,0xC2,0x16,0xEA,0xC8,0xC1,
			0xA8,0x69,0x09,0x78,0xE4,0xE8,0x8B,0x6D,0x41,0x34,
			0x1D,0x06,0xB3,0xA8,0xF4,0x93,0x2F,0x56,0x62,0x79,
			0x71,0x31,0x0F,0xAA,0xD0,0xAA,0x0E,0x8A,0xD5,0x7B,
			0x56,0x12,0x1A,0xD1,0x71,0xE0,0x65,0x4C,0xA3,0x7E, /* 400 */

			0x7F,0xC0,0x9B,0x57,0xF3,0x4D,0xEE,0xEA,0x29,0x4A,
			0x7A,0x72,0xB1,0xFD,0xAD,0xA5,0x3B,0xEB,0xF7,0xE9,
			0x87,0x56,0xDC,0x98,0x9A,0x76,0x1D,0xEE,0x6C,0x25,
			0xF9,0xD4,0x85,0xE9,0x9C,0xF1,0x9E,0x0D,0xD7,0xC1,
			0xAD,0x93,0xA2,0x94,0xF1,0x7D,0xA7,0x86,0xFE,0xED,
			0x89,0xCA,0x07,0x32,0x2D,0xC2,0x8E,0xA0,0x40,0x72,
			0x26,0x2C,0x52,0x13,0xB8,0x49,0xFF,0x7E,0x65,0x2D,
			0xEF,0x43,0xFE,0x00,0x3B,0x0F,0xAD,0x48,0xBD,0x70,
			0x00,0x20,0xC9,0xF4,0x4F,0xB4,0x72,0x2D,0x49,0xC9,
			0x37,0x31,0x21,0x66,0x5C,0x8C,0xED,0x33,0x93,0x13, /* 500 */

			0xB6,0x53,0xFF,0xC5,0x40,0xD8,0x0B,0x53,0xBA,0x69,
			0xF1,0xBF,0xC0,0x47,0xA1,0xC1,0x02,0xBC,0x54,0x8F,
			0x7D,0x60,0xD3,0x83,0xB3,0xCB,0x40,0x52,0xF2,0x64,
			0xCE,0x37,0x2F,0xC5,0x22,0x0C,0xEF,0x98,0xEF,0x75,
			0x5D,0xC1,0xF2,0x99,0xCD,0x13,0x99,0xB9,0x57,0xBD,
			0x7C,0x91,0xFF,0xD3,0x22,0x6F,0xE0,0x25,0x60,0x2A,
			0xC4,0x97,0x54,0x65,0xA1,0x15,0x39,0x84,0x23,0xB2,
			0x7D,0xE1,0x14,0x96,0x52,0x91,0x58,0x74,0x4A,0xF8,
			0xC3,0xBC,0x42,0x9E,0xCD,0x6F,0x72,0x9A,0x8F,0xF5,
			0x06,0x43,0xEB,0x7D,0xCA,0xE7,0xA9,0x95,0xC9,0xC6, /* 600 */

			0x28,0x03,0x8E,0xCC,0xDB,0x09,0x5D,0x1B,0xF6,0xBE,
			0x4F,0x3A,0x0A,0x35,0xFE,0xAC,0xB2,0x4D,0x78,0x32,
			0x06,0x33,0x74,0x52,0x40,0x73,0xE0,0xD1,0x67,0x70,
			0x97,0x02,0x60,0x0A,0xD4,0x49,0x3D,0xAC,0xA5,0xF6,
			0xBA,0x5B,0xAE,0x2F,0x54,0x2B,0xA3,0x4D,0xB9,0xA3,
			0x9F,0x5B,0x7B,0x7A,0xD6,0x61,0x5E,0xCB,0x8B,0x36,
			0x03,0x59,0xE5,0x39,0x2B,0xB3,0x9C,0xAC,0x3C,0x34,
			0x3C,0xF2,0xAF,0x33,0x76,0x89,0xE1,0x2B,0x2F,0x07,
			0x07,0x43,0x57,0xC9,0x18,0x2F,0x1A,0xE6,0x62,0xF9,
			0xD5,0xF7,0xC3,0x6A,0xA4,0x2E,0x46,0xCC,0x2D,0x31, /* 700 */

			0x8B,0x90,0x27,0x81,0x5D,0x18,0x68,0xE9,0x4F,0x64,
			0x2D,0xD5,0x58,0xAC,0x69,0x9F,0x32,0x49,0x5A,0x5B,
			0xBA,0xC7,0xF0,0xB5,0x30,0x58,0x32,0x29,0x8D,0x4D,
			0xBD,0x6B,0x1C,0x14,0x67,0xAB,0xF1,0x2A,0x04,0x8D,
			0x90,0xF7,0xFA,0xE7,0x20,0x56,0x0A,0x26,0x91,0xAD,
			0xC6,0xB2,0xCA,0x60,0x56,0xCB,0x49,0x83,0x95,0xB2,
			0x09,0xF6,0x16,0x5E,0x32,0xF5,0x79,0x9E,0x46,0xA8,
			0xBE,0xD5,0x32,0x6A,0x4F,0x8B,0x30,0x08,0x31,0x69,
			0x24,0x52,0xFF,0x56,0x0C,0x18,0xED,0xEE,0xA4,0x83,
			0xAC,0xE9,0x77,0xF2,0x1F,0x83,0x0C,0xEA,0x86,0x17, /* 800 */

			0x67,0x89,0x4F,0x0C,0x07,0xEE,0x8B,0xC0,0x3D,0xEE,
			0x9D,0x0E,0x24,0x23,0x98,0xDE,0x84,0x10,0x6C,0xEA,
			0x05,0x3A,0xF2,0x97,0x3A,0xA7,0x83,0xC5,0xF5,0x65,
			0x03,0x10,0x7C,0x1D,0x8C,0x35,0x8C,0xA8,0x7B,0x09,
			0x53,0xB3,0x12,0x76,0xDC,0x2C,0x54,0x90,0x03,0x8B,
			0x17,0x48,0x47,0x0E,0xBF,0xD2,0x4B,0xAB,0x46,0x0C,
			0xB8,0xA0,0x59,0x55,0x1E,0x35,0xA5,0x50,0x4A,0x74,
			0xE1,0x49,0x5D,0x3F,0x19,0x0E,0xA7,0x71,0xEA,0x63,
			0x0D,0x78,0x49,0x45,0xC0,0xF1,0x51,0xC6,0x0F,0x4D,
			0x70,0x11,0xB6,0xD3,0xE4,0x44,0xD2,0x1D,0x04,0x0F, /* 900 */

			0x31,0xE0,0x25,0x00,0x94,0xA7,0xEC,0x1C,0xD7,0xE9,
			0x64,0x66,0xCC,0x03,0x80,0xFE,0x9B,0x5C,0x91,0xE5,
			0xB3,0xC4,0x36,0x0D,0x21,0x26,0xBD,0x91,0xEA,0xFB,
			0x9C,0xB4,0x5F,0x7A,0xD3,0x34,0x83,0xC9,0xB2,0xD6,
			0x9B,0xFD,0x01,0x8A,0x6E,0x66,0xE1,0x50,0x70,0x4B,
			0xE0,0xDB,0xA7,0xE7,0xD8,0x44,0x3D,0xEC,0x21,0xB0,
			0x1E,0x7A,0xD5,0x90,0xC1,0x94,0xF2,0xD8,0x5E,0xD8,
			0xAA,0x87,0x66,0x7C,0x40,0x91,0x2F,0x09,0xF1,0x38,
			0xB4,0x7E,0x21,0x9C,0x20,0x79,0x9D,0xC2,0xE9,0xB3,
			0xAD,0xC2,0xB6,0xCF,0x0F,0x9D,0x10,0x65,0x64,0xE5, /* 1000 */

			0x3E,0xD6,0x44,0xC4,0x9D,0xE5,0x43,0x1F,0x0A,0x1F,
			0xBA,0x94,0xDE,0x7C,0x3A,0xA2,0x35,0x46,0xE0,0xBA,
			0xE1,0x55,0xE3,0x5A,0x3A,0xE0,0x20,0xD3,0x9B,0xC9,
			0xC5,0x43,0x93,0x58,0xFE,0x97,0x31,0x1B,0x0D,0xC2,
			0x9D,0xE1,0x5D,0xAB,0xA1,0xDF,0xB1,0x12,0xBB,0x2C,
			0x23,0x3C,0x31,0x10,0xC8,0x09,0x25,0xAC,0x2C,0x22,
			0xE1,0x6B,0xE4,0x21,0x90,0xB5,0x77,0x92,0x32,0x97,
			0xEB,0x91,0xBC,0xF4,0xBE,0x49,0x83,0x14,0x6C,0xBB,
			0xC9,0x64,0x55,0xB4,0x9C,0x17,0x4B,0xEF),
		.ss = chunk_from_chars(
			0xAB,0x51,0xF1,0xEE,0x19,0x50,0xBE,0x70,0x30,0x6A,
			0xC9,0xB0,0x41,0x2B,0x89,0x96,0x25,0xC8,0x80,0x81,
			0x29,0x26,0xF4,0xE9,0x3C,0x17,0x94,0x71,0xF6,0xAF,
			0x52,0xE9),
	},
	{
		.mechanism = QSKE_SABER_L3,
		.count = 1,
		.seed = chunk_from_chars(
			0xD8,0x1C,0x4D,0x8D,0x73,0x4F,0xCB,0xFB,0xEA,0xDE,
			0x3D,0x3F,0x8A,0x03,0x9F,0xAA,0x2A,0x2C,0x99,0x57,
			0xE8,0x35,0xAD,0x55,0xB2,0x2E,0x75,0xBF,0x57,0xBB,
			0x55,0x6A,0xC8,0x1A,0xDD,0xE6,0xAE,0xEB,0x4A,0x5A,
			0x87,0x5C,0x3B,0xFC,0xAD,0xFA,0x95,0x8F),
		.pk = chunk_from_chars(
			0x89,0x3A,0xB4,0xCB,0x9C,0x32,0x08,0xF4,0x7C,0x7C,
			0xD8,0xED,0x4A,0x7C,0xE0,0x63,0x58,0xD5,0x50,0x3B,
			0x73,0xC0,0x41,0x62,0x08,0xA5,0x66,0xF9,0xD8,0x17,
			0xE8,0x96,0x3F,0x32,0x64,0xA8,0xFE,0xF0,0xF8,0xA9,
			0xAC,0x97,0x08,0x37,0x4F,0x28,0x8B,0xDA,0x1E,0x49,
			0x19,0xFA,0xF7,0xD6,0xC2,0x1E,0x0E,0x9F,0xC3,0xBC,
			0xB9,0xE0,0xC4,0x55,0xE0,0xB8,0xC4,0xD9,0x11,0xD1,
			0xB7,0x3B,0xC4,0x3E,0x7E,0x7E,0x3B,0x33,0x9D,0x9D,
			0x86,0xE3,0x52,0xE7,0xF7,0xF4,0xBE,0x82,0x0E,0xFD,
			0x93,0xDF,0x2A,0x60,0xD7,0x9B,0x9F,0x2E,0xBD,0x92, /* 100 */

			0xF2,0xC3,0xBB,0x86,0x96,0xF1,0x80,0x38,0xFD,0x9D,
			0x07,0xA9,0x6B,0xCC,0x62,0x3E,0x63,0xFD,0x06,0xA7,
			0x52,0x8F,0x24,0x4D,0x19,0x15,0x58,0x9C,0x30,0xA4,
			0x99,0xEE,0x5F,0xAF,0x6E,0xEF,0x4D,0x34,0xAF,0xAB,
			0xD5,0x00,0x72,0xC5,0x82,0x0F,0x9E,0xF3,0x10,0x0F,
			0x2B,0x77,0x9B,0x68,0x7C,0xF9,0x71,0x50,0xE6,0x24,
			0xEC,0xAE,0x1C,0x5C,0x9D,0x18,0xD5,0x67,0xA4,0x5C,
			0xB7,0xDC,0xB6,0x68,0x82,0xC5,0xC1,0xAF,0xBF,0x92,
			0x94,0x15,0x13,0xC5,0x7C,0x25,0x8C,0x79,0x38,0x13,
			0xEF,0x86,0x9D,0xE1,0x57,0x07,0xEE,0xDA,0x28,0x8D, /* 200 */

			0x22,0x92,0x25,0x75,0x74,0xE9,0xFE,0xF3,0xC7,0x6B,
			0xC3,0x9C,0x53,0x79,0x8C,0x0A,0x19,0xA2,0x02,0x80,
			0x36,0xC9,0xB9,0x5B,0xFE,0x5B,0x3C,0x18,0xDB,0x66,
			0x5B,0x8A,0xEB,0x24,0xAE,0x3C,0x11,0xDA,0x68,0xDC,
			0x8D,0x00,0xB5,0xC3,0x27,0xA7,0x28,0x68,0xC3,0x64,
			0x79,0xBA,0xED,0xDB,0xF0,0x91,0x73,0xFA,0xA5,0x5C,
			0xD4,0x01,0xC7,0x25,0xA0,0x47,0xB0,0xEC,0xF3,0x76,
			0x12,0xED,0x17,0x07,0xA5,0x7B,0x25,0xB2,0x49,0xF9,
			0xC6,0xF3,0x95,0x9E,0x53,0xFD,0x8D,0xCB,0x93,0xD0,
			0xFE,0x37,0xC7,0xD5,0xD6,0x17,0xB1,0x13,0x99,0xAD, /* 300 */

			0x47,0xCC,0xBF,0xC6,0xEE,0xD9,0x9C,0x39,0x2A,0x8B,
			0xAD,0xBE,0x38,0xBE,0xF8,0x03,0x6A,0xE8,0x75,0x4F,
			0x70,0x09,0xCA,0x4B,0x12,0x52,0x5A,0xB8,0xCC,0xFE,
			0x8A,0x78,0x9F,0xEB,0xD7,0xC8,0xB5,0x57,0xE5,0x8F,
			0xA9,0xEA,0x14,0x45,0x1E,0x73,0xB7,0x0B,0x86,0xE6,
			0x70,0x9E,0x54,0xC9,0x7B,0x6C,0x3B,0xAC,0x52,0x25,
			0x83,0xB2,0x9A,0xFC,0xCF,0x33,0x23,0x96,0x8A,0xDA,
			0xC0,0xA8,0x5E,0xDC,0x13,0x96,0xE7,0xCD,0x5A,0x7D,
			0xFD,0x9D,0xA9,0x88,0xD2,0xA6,0xAE,0xB8,0x73,0xD1,
			0x85,0x05,0xC8,0x8F,0x26,0xDE,0xE3,0x34,0x21,0x3B, /* 400 */

			0xC7,0x21,0x6E,0x78,0xC1,0x9B,0x30,0x73,0xC4,0x1F,
			0xF1,0xB4,0x21,0x49,0x5C,0x2D,0xC9,0xBD,0xC4,0xDB,
			0x67,0xD0,0x43,0xDD,0xC8,0x1A,0xDA,0x10,0x06,0x5C,
			0xC1,0x1C,0xE2,0xCF,0x3A,0x07,0x4F,0x31,0xAC,0x11,
			0x2A,0x8B,0x8F,0x0D,0xC6,0x31,0xC6,0x5E,0x40,0x73,
			0xA6,0xAE,0xBA,0x8F,0x8F,0xB1,0x5B,0x0B,0x8B,0x45,
			0x13,0x76,0xEC,0x95,0x47,0x1B,0x78,0x74,0x17,0xA6,
			0xD8,0x6C,0x86,0x16,0x1D,0x6B,0x45,0xBD,0x93,0xB8,
			0x73,0x64,0x80,0x6F,0xDB,0x6B,0x39,0x46,0x74,0xBF,
			0x44,0x0D,0xA7,0x0B,0x0E,0xC3,0xA2,0x0D,0x61,0x7D, /* 500 */

			0x57,0x69,0xC2,0xE0,0x2F,0x0E,0x20,0xDE,0xCD,0x5F,
			0xE5,0x54,0xCB,0x4A,0xC4,0xF4,0x33,0xF0,0x64,0x40,
			0xAF,0x06,0x26,0x92,0x00,0x29,0xFB,0x08,0x6A,0x59,
			0x47,0xE3,0x43,0x90,0x4A,0x26,0xC2,0x2A,0x35,0x70,
			0xDA,0xC1,0x41,0xB8,0x7B,0x87,0x7C,0xC6,0x3D,0x83,
			0xA5,0x22,0xC4,0x38,0x90,0xF0,0xF6,0x37,0xD1,0xB1,
			0x6C,0x7E,0xC2,0x85,0xB0,0xBD,0xCA,0x2B,0x38,0xFC,
			0x13,0x81,0x12,0x6F,0xB2,0x1E,0xC5,0x5E,0xF1,0x5F,
			0x2B,0x9C,0x67,0x5A,0x52,0xB9,0x5F,0x35,0xBD,0x93,
			0xA6,0xB7,0x0F,0x86,0x6F,0xD4,0xD7,0xE0,0x87,0xFA, /* 600 */

			0xA7,0xA7,0x42,0xBF,0x8B,0x57,0x93,0x89,0xB9,0xB6,
			0xEC,0x80,0x89,0x6C,0x7C,0xEF,0xF0,0xCD,0x6B,0xFE,
			0x4C,0x13,0xB2,0xD9,0xFA,0x6E,0x67,0x14,0x9F,0x77,
			0xB1,0xC4,0x70,0x5D,0x92,0xEF,0x9E,0x19,0xA1,0xC8,
			0x8B,0xA3,0x1B,0x6D,0x09,0xAF,0x70,0x80,0xA4,0x00,
			0xE2,0x0A,0x76,0xDB,0x75,0xA8,0xC6,0x55,0xF1,0x64,
			0xD1,0xC5,0x08,0x1A,0x2B,0x80,0x2C,0x65,0x5C,0x94,
			0x47,0xFF,0xA0,0xF8,0x90,0xD7,0xB5,0xA9,0x7A,0xA6,
			0x55,0x98,0x57,0xD0,0x67,0x1B,0x2C,0x50,0xD8,0xA2,
			0x34,0x41,0x6D,0xBB,0x8F,0xC2,0x73,0xDD,0xC8,0x46, /* 700 */

			0x4A,0x67,0x3A,0x05,0x7C,0x3C,0x86,0x3D,0xB9,0x8F,
			0x06,0x84,0xC8,0x22,0x3C,0x4D,0x7F,0xBF,0x59,0xD8,
			0x40,0xB6,0x55,0x3F,0x49,0x66,0x9E,0x58,0x8B,0x89,
			0xED,0xEF,0x79,0xA2,0x9F,0x33,0xDD,0x7C,0x2E,0x5E,
			0x43,0x13,0x31,0x0C,0x81,0x84,0x4C,0xB3,0xDA,0x6C,
			0x0B,0x19,0xA1,0xE4,0x35,0xB4,0xF2,0x1D,0xAC,0xA4,
			0xE8,0xAB,0xE7,0x36,0xC6,0xB1,0x11,0x7B,0xDA,0x36,
			0xD6,0xEE,0x75,0x53,0x34,0xFF,0x01,0x12,0xDC,0x38,
			0xC3,0xE1,0x2B,0x4B,0x0E,0x36,0x9C,0x35,0xC4,0xD9,
			0x7F,0xEB,0xCF,0xC3,0x59,0xB1,0x4B,0x44,0x2D,0x92, /* 800 */

			0xBA,0x47,0x8A,0xC2,0xA0,0xE0,0x9E,0x70,0x48,0x07,
			0xE5,0xF5,0xA6,0xF7,0x76,0xDF,0x90,0x3B,0x10,0x3F,
			0x47,0x30,0x91,0xE1,0x46,0xEC,0x89,0x55,0xF6,0xA0,
			0xC3,0x59,0x4F,0x1C,0x3E,0x24,0xD8,0x7A,0x0D,0x24,
			0x24,0x7D,0xFE,0x4B,0x1E,0x6F,0x60,0x75,0x9C,0x08,
			0xEA,0x8B,0x78,0x31,0xB6,0x3E,0x2B,0xC6,0xF0,0x45,
			0x20,0x29,0x90,0x26,0xE1,0x20,0x04,0x15,0x54,0x71,
			0xCD,0x1C,0x70,0xAE,0x56,0xA8,0x61,0x15,0x0D,0xD7,
			0x06,0xF8,0xAB,0xAB,0x75,0xC3,0x01,0x33,0x46,0xCE,
			0x16,0xCC,0xAB,0xF7,0x7B,0xB1,0xF0,0xB3,0x7B,0x36, /* 900 */

			0xD4,0xB1,0x5B,0x8A,0x62,0x2C,0x4C,0xAA,0x11,0xE0,
			0xC0,0xD9,0xB4,0xA2,0xA4,0x94,0xC0,0x79,0x16,0xEC,
			0xF5,0x34,0x6F,0xFE,0x7C,0x37,0x91,0x04,0xD1,0x9F,
			0x6B,0x8D,0x09,0xB6,0x40,0xD1,0xDC,0x62,0xF5,0xB2,
			0x65,0xC3,0x4F,0x35,0x02,0x1B,0x62,0x37,0x48,0x1D,
			0xBA,0x28,0x2C,0x51,0x21,0x87,0x29,0x90,0x43,0x1E,
			0xFF,0xB0,0x19,0x52,0xE9,0x0E,0x99,0x71,0xAB,0xF3,
			0xC1,0x6A,0xF5,0xD7,0xB7,0x35,0x0A,0xC0,0xC5,0x3E,
			0x39,0x9E,0xDB,0x48,0x08,0x59,0x82,0x40,0x75,0x0D,
			0x04,0xF4),
		.ct = chunk_from_chars(
			0x7A,0x8B,0xB5,0xCC,0xBC,0x64,0x2A,0x57,0xAB,0x2C,
			0xA3,0x9F,0x45,0xB2,0x1A,0x84,0x46,0x97,0x62,0x99,
			0x42,0x26,0xCA,0xAE,0x79,0x3C,0x88,0x9F,0x6E,0x1D,
			0x70,0xFD,0x09,0xAC,0x6B,0x44,0xD2,0x0E,0xE2,0x92,
			0x4B,0x20,0x12,0x47,0xD8,0xD2,0x7B,0x83,0xB4,0xF6,
			0xDC,0xDF,0xF0,0xC1,0x9F,0x6A,0x32,0x6C,0x01,0x5B,
			0xFD,0x02,0xAC,0xC0,0x78,0xF0,0x6C,0x7C,0xA8,0xE6,
			0x51,0xAC,0xD0,0x67,0x29,0x67,0x04,0x31,0xE4,0xEF,
			0xE9,0x68,0x02,0xAF,0xDF,0x89,0xDB,0xFA,0xFC,0x4B,
			0xFF,0x5E,0x17,0xC8,0x82,0xDA,0x84,0x46,0x8A,0xCB, /* 100 */

			0xBF,0xA9,0x27,0xC0,0xA7,0x28,0xE3,0x99,0x8D,0x10,
			0xB4,0x1D,0xCA,0x7A,0x78,0x64,0x85,0xE5,0x88,0xD1,
			0x5C,0xEC,0xE1,0x27,0xB2,0x8E,0x87,0xCA,0xF5,0xE6,
			0x04,0x2C,0x45,0x82,0x1E,0x06,0x1A,0x6E,0xDD,0xB1,
			0x3A,0xCB,0xA4,0x31,0xEC,0x2C,0x77,0x6D,0x83,0x59,
			0x98,0x55,0xCD,0xCC,0x04,0x77,0x6C,0xC6,0x09,0x84,
			0x82,0xE1,0xF8,0xEE,0xBE,0x5A,0x2E,0x41,0x5B,0x78,
			0xBA,0xCF,0x28,0xAD,0x6A,0x92,0xF7,0xBE,0x10,0x9E,
			0xC2,0xBD,0xFD,0x86,0x01,0x6E,0x3F,0x33,0x88,0x87,
			0x53,0x7A,0x31,0xB8,0x3F,0xFD,0x83,0x01,0xB4,0x52, /* 200 */

			0x79,0xCD,0x7F,0x10,0xD3,0x88,0x7E,0x3D,0xC1,0x2E,
			0xBE,0x33,0xAC,0x04,0x10,0xC4,0xAE,0x02,0x64,0xD0,
			0x77,0x7D,0x0B,0x6C,0x59,0xB4,0x4C,0x20,0xE2,0x07,
			0x13,0xE9,0x8D,0x33,0xC5,0xB4,0xF5,0x95,0x58,0x72,
			0x5B,0x76,0x17,0x2A,0x6A,0x3C,0x2D,0x02,0x51,0xC9,
			0x57,0xAF,0xF0,0x39,0xE7,0x52,0x3C,0x0B,0x5F,0x23,
			0x0B,0x34,0xD5,0xF3,0xD8,0xCB,0x87,0xD9,0x6B,0xEF,
			0x38,0xB9,0x4B,0xAE,0xCF,0xF9,0x3B,0xFF,0xB6,0x4E,
			0x83,0x40,0x55,0x68,0xEA,0x71,0x91,0xDD,0x63,0xFE,
			0x50,0x45,0x30,0x06,0xB5,0xEE,0xD6,0x76,0xC1,0xB0, /* 300 */

			0x05,0xB6,0x42,0xEE,0xF1,0xD5,0x9F,0x9C,0xD1,0x1F,
			0x27,0x31,0xCE,0xBD,0xA5,0x98,0x1B,0x1C,0x02,0x32,
			0xA0,0x86,0x7B,0x18,0xDE,0x30,0xFD,0x1C,0x8E,0x54,
			0x88,0xA7,0x10,0xAA,0x1D,0x36,0x1D,0x73,0x32,0xBD,
			0xB5,0xC7,0x79,0x5E,0xAE,0x15,0xF5,0x86,0xEF,0xF6,
			0x6A,0xA1,0x2F,0x62,0x0A,0x80,0x5D,0x00,0xA9,0xEC,
			0xF6,0x01,0x42,0x18,0xB3,0xEF,0xB1,0x5A,0x02,0x0C,
			0x31,0x8D,0xC4,0x01,0xBF,0x39,0x66,0x8C,0x70,0x7A,
			0xFD,0x5E,0xCD,0x16,0x20,0xA4,0x17,0x44,0x54,0x16,
			0x97,0x96,0x28,0x36,0x30,0xC8,0x85,0x60,0x83,0x27, /* 400 */

			0x5F,0xC1,0x38,0xEC,0x7C,0xAA,0xEB,0x54,0x94,0xE5,
			0xD4,0x1E,0x1E,0xA5,0x01,0x20,0x61,0x71,0xC0,0x45,
			0xE1,0xBE,0xB1,0x7D,0xCE,0xC6,0xD1,0x81,0xB9,0xB4,
			0xED,0x4B,0xD0,0xCC,0x71,0x89,0x4C,0x8B,0xF1,0x6B,
			0x3E,0xCA,0xD6,0x3D,0x84,0x9F,0x2B,0x39,0x41,0x3B,
			0x1F,0x07,0x69,0x6B,0x20,0x2E,0xA4,0x42,0x77,0xFB,
			0xEF,0xDF,0x87,0x33,0x71,0x6C,0x4F,0xF1,0xD4,0xE0,
			0x79,0xD6,0x5F,0x3A,0x23,0xC3,0x33,0x90,0x42,0xA4,
			0x79,0x70,0xDE,0xCF,0xB3,0x32,0xDF,0x57,0xAA,0x6A,
			0x0F,0xB4,0xD0,0xD9,0xBE,0xB4,0x7B,0x2D,0x09,0x64, /* 500 */

			0x77,0xFA,0xFA,0x97,0xB2,0x87,0x86,0x4E,0x70,0x0F,
			0xD0,0x51,0x4E,0xBA,0x15,0x0D,0xEC,0x28,0x53,0xF4,
			0x20,0xE8,0x9F,0x7A,0x06,0x90,0x03,0x61,0x3C,0x70,
			0xC5,0x5D,0x6D,0xF2,0x81,0xA7,0xF1,0x19,0xB6,0xA6,
			0x25,0x70,0x97,0xFA,0x7D,0x04,0xEC,0x70,0x62,0x88,
			0xDA,0x25,0x1F,0xA5,0xCF,0x90,0xB2,0x8D,0x22,0xB4,
			0x14,0x3B,0x3C,0xCD,0x80,0xD4,0x23,0x9D,0x5B,0x01,
			0x23,0x39,0x01,0x19,0xA3,0xF1,0x27,0xA6,0xB5,0x33,
			0x38,0xD3,0x03,0x94,0x39,0x19,0x23,0x82,0x61,0x4D,
			0x04,0xA7,0xA4,0x31,0x74,0xE8,0x17,0xBD,0x03,0x64, /* 600 */

			0xA2,0xC7,0x7C,0x25,0x26,0xD1,0xC0,0xB1,0x74,0xE3,
			0xB5,0x22,0x10,0xE0,0x50,0x19,0x0B,0xA5,0x78,0x39,
			0x78,0x5F,0xC6,0xEE,0x15,0x16,0x23,0x3A,0x97,0xA2,
			0x31,0x8B,0x59,0xBF,0xF7,0x23,0x4A,0x12,0x2B,0x77,
			0x13,0xA2,0x64,0xD5,0xBF,0x1D,0xF0,0xF7,0xFF,0xC5,
			0x54,0xEB,0x87,0xF9,0xC0,0xD6,0x72,0xCD,0x45,0x9D,
			0x7E,0xEC,0xBD,0x23,0x6F,0x01,0x53,0x8D,0x63,0x2F,
			0x3F,0x41,0xC8,0x8D,0xAD,0x47,0x10,0x5F,0x5A,0x26,
			0xF1,0x11,0x9E,0xBA,0x60,0x0D,0x99,0x34,0xB3,0xCB,
			0x95,0xD8,0xD4,0x79,0xC6,0xDF,0xBA,0x2D,0xAC,0x4E, /* 700 */

			0xF8,0x8F,0xBB,0x83,0xE9,0x5A,0x45,0xBB,0x8D,0x33,
			0xB0,0xFB,0x5C,0xEA,0x9B,0xE3,0x41,0x52,0x2E,0x78,
			0x99,0x63,0x74,0x24,0x18,0xC0,0x24,0x23,0x28,0x02,
			0x98,0xDF,0xAB,0xB8,0xB1,0x85,0x50,0x12,0x28,0xD6,
			0x47,0x94,0x17,0x64,0x9C,0x1A,0xFF,0xB6,0x29,0x3D,
			0x42,0xD5,0x00,0x11,0x6F,0x32,0xF3,0x9B,0x10,0xFE,
			0x79,0x3E,0x0F,0x4D,0x13,0x8E,0x2C,0x4A,0x25,0x3C,
			0xE8,0x72,0x66,0xE3,0x3A,0xAA,0x22,0x8F,0x45,0x6C,
			0x4B,0x77,0x2C,0x66,0x9D,0xBF,0x32,0xF8,0x94,0xBF,
			0xE3,0x33,0x17,0x94,0x73,0x87,0x11,0x9B,0xDD,0x67, /* 800 */

			0xD9,0xB3,0xA2,0x83,0x59,0xD5,0x65,0xFA,0x9A,0xAC,
			0x33,0xC7,0xA5,0x94,0xE5,0x53,0xB5,0x05,0xDF,0x6A,
			0xB9,0xCF,0x16,0x49,0xAC,0x56,0xD1,0xC2,0xEA,0xED,
			0x5E,0x02,0xD8,0x77,0xF0,0x45,0x00,0xC7,0xF4,0xB1,
			0x4C,0x45,0x3F,0xA8,0xB1,0xFF,0x54,0xAB,0x92,0x32,
			0x52,0x2D,0x81,0x61,0xF1,0xC4,0x4D,0x4D,0xB0,0xB5,
			0xCD,0x0D,0x64,0xD4,0xE1,0x8A,0x62,0xB4,0x99,0x91,
			0x5D,0xBB,0x49,0x91,0xDD,0x61,0x90,0x82,0x79,0x6F,
			0x4D,0xCE,0xA6,0x40,0x3F,0x77,0xDB,0x4D,0xB3,0xE8,
			0xD0,0x5B,0x67,0xDB,0x92,0xBF,0x9B,0xCA,0x99,0x48, /* 900 */

			0xC1,0x57,0x39,0xE6,0x36,0xEF,0xA1,0xE0,0x72,0x1D,
			0x1F,0xCF,0x08,0x9F,0xA3,0x96,0xCC,0x19,0xA1,0xB3,
			0xE2,0x74,0x76,0x85,0x03,0x27,0x53,0x48,0x22,0xC6,
			0xEB,0xAD,0xB9,0xCD,0x3F,0x49,0x17,0xF8,0xA4,0x34,
			0xEA,0xA2,0xDC,0xB2,0x37,0x94,0xA1,0x59,0xB6,0xAA,
			0xD5,0x9A,0x9E,0x4B,0xC3,0x16,0x4F,0x7F,0x0F,0xD1,
			0x1D,0x12,0xB8,0x77,0xE0,0xEE,0x98,0xD3,0xFE,0x7F,
			0x15,0x2E,0xAA,0x10,0x64,0xED,0x95,0xFF,0xEF,0x8C,
			0x31,0x27,0xD0,0x56,0xC4,0x73,0x10,0x2C,0xFF,0x1F,
			0xD3,0x23,0x39,0xF6,0x5D,0xDF,0xCE,0xBA,0x66,0x43, /* 1000 */

			0xB1,0xA7,0xB9,0x58,0x4D,0x7A,0x64,0xB4,0xF1,0xCA,
			0xB3,0x3E,0x19,0xF0,0x46,0xB9,0xAB,0xC4,0xDF,0xCE,
			0x24,0x06,0x4C,0x69,0x1A,0xEF,0xD7,0x4B,0x9A,0xED,
			0xA7,0x53,0xB3,0x55,0x93,0x52,0xFF,0x97,0xE2,0x94,
			0xE2,0xCC,0xE5,0x4F,0x1F,0x0C,0x85,0x78,0x35,0x3B,
			0x2D,0x4F,0x11,0x8A,0x8E,0x3F,0xEC,0x75,0x67,0x63,
			0xC2,0x96,0x89,0x00,0x47,0xEF,0x75,0x23,0x8E,0x1E,
			0xBD,0x80,0x86,0xDD,0x65,0xFC,0x12,0xED,0xA8,0x21,
			0x1F,0xFB,0xB2,0xF7,0x21,0x04,0x56,0x8D),
		.ss = chunk_from_chars(
			0xC5,0x01,0xEE,0x4B,0x1D,0xD4,0xB5,0xB7,0x3C,0xC7,
			0x54,0x23,0x42,0x46,0x46,0x63,0x27,0xAB,0x2A,0xB6,
			0x0B,0x2A,0xED,0x37,0x67,0xCB,0x99,0x90,0xD4,0xFE,
			0xA5,0x98),
	},
