#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Globalization::Unicode::MSCompatUnicodeTable {
    IL2CPP_REGISTER_METHOD(0x023BA2C0, app::TailoringInfo *, GetTailoringInfo, (int32_t lcid))
    IL2CPP_REGISTER_METHOD(0x023BA470, void, BuildTailoringTables, (app::CultureInfo * culture, app::TailoringInfo * t, app::Contraction__Array * * contractions, app::Level2Map__Array * * diacriticals))
    IL2CPP_REGISTER_METHODINFO(0x04764E80, MSCompatUnicodeTable_BuildTailoringTables__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023BAE80, void, SetCJKReferences, (app::String * name, app::CodePointIndexer * * cjk_indexer, app::uint8_t * * cat_table, app::uint8_t * * lv1_table, app::CodePointIndexer * * lv2_indexer, app::uint8_t * * lv2_table))
    IL2CPP_REGISTER_METHOD(0x023BB200, uint8_t, Category, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BB300, uint8_t, Level1, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BB400, uint8_t, Level2, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BB500, uint8_t, Level3, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BB600, bool, IsIgnorable, (int32_t cp, uint8_t flag))
    IL2CPP_REGISTER_METHOD(0x023BB770, bool, IsIgnorableNonSpacing, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BB810, int32_t, ToKanaTypeInsensitive, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x023BB830, int32_t, ToWidthCompat, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x023BB9B0, bool, HasSpecialWeight, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x023BBA20, bool, IsHalfWidthKana, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x023BBA40, bool, IsHiragana, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x023BBA60, bool, IsJapaneseSmallLetter, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x023BBBD0, bool, get_IsReady, ())
    IL2CPP_REGISTER_METHOD(0x023BBC70, void *, GetResource, (app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x0472AB38, MSCompatUnicodeTable_GetResource__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023BBD20, uint32_t, UInt32FromBytePtr, (uint8_t * raw, uint32_t idx))
    IL2CPP_REGISTER_METHOD(0x023BBD60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x023BC3C0, void, FillCJK, (app::String * culture, app::CodePointIndexer * * cjk_indexer, app::uint8_t * * cat_table, app::uint8_t * * lv1_table, app::CodePointIndexer * * lv2_indexer, app::uint8_t * * lv2_table))
    IL2CPP_REGISTER_METHOD(0x023BC5C0, void, FillCJKCore, (app::String * culture, app::CodePointIndexer * * cjk_indexer, app::uint8_t * * cat_table, app::uint8_t * * lv1_table, app::CodePointIndexer * * cjk_lv2_indexer, app::uint8_t * * lv2_table))
}
