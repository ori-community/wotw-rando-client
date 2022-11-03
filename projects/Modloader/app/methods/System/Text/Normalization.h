#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::Normalization {
    IL2CPP_REGISTER_METHOD(0x0245A300, uint32_t, PropValue, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x0245A480, int32_t, CharMapIdx, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x0245A600, uint8_t, GetCombiningClass, (int32_t c))
    IL2CPP_REGISTER_METHOD(0x0245A700, int32_t, GetPrimaryCompositeFromMapIndex, (int32_t src))
    IL2CPP_REGISTER_METHOD(0x0245A800, int32_t, GetPrimaryCompositeHelperIndex, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x0245A900, app::String*, Compose, (app::String * source, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245AA60, app::StringBuilder*, Combine_1, (app::String * source, int32_t start, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245AC80, void, Combine_2, (app::StringBuilder * sb, int32_t i, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245ADE0, int32_t, CombineHangul, (app::StringBuilder * sb, app::String* s, int32_t current))
    IL2CPP_REGISTER_METHOD(0x0245AFF0, int32_t, Fetch, (app::StringBuilder * sb, app::String* s, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0245B040, int32_t, TryComposeWithPreviousStarter, (app::StringBuilder * sb, app::String* s, int32_t current))
    IL2CPP_REGISTER_METHOD(0x0245B470, int32_t, TryCompose, (int32_t i, int32_t starter, int32_t candidate))
    IL2CPP_REGISTER_METHOD(0x0245B640, app::String*, Decompose_1, (app::String * source, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245B730, void, Decompose_2, (app::String * source, app::StringBuilder** sb, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245B8E0, void, ReorderCanonical, (app::String * src, app::StringBuilder** sb, int32_t start))
    IL2CPP_REGISTER_METHOD(0x0245BCA0, void, DecomposeChar, (app::StringBuilder * *sb, app::Int32__Array** buf, app::String* s, int32_t i, int32_t check_type, int32_t* start))
    IL2CPP_REGISTER_METHOD(0x0245BFE0, app::NormalizationCheck__Enum, QuickCheck, (uint16_t c, int32_t type))
    IL2CPP_REGISTER_METHOD(0x0245C1A0, int32_t, GetCanonicalHangul, (int32_t s, app::Int32__Array* buf, int32_t buf_idx))
    IL2CPP_REGISTER_METHOD(0x0245C2F0, int32_t, GetCanonical, (int32_t c, app::Int32__Array* buf, int32_t buf_idx, int32_t check_type))
    IL2CPP_REGISTER_METHOD(0x0245C810, app::String*, Normalize_1, (app::String * source, app::NormalizationForm__Enum normalization_form))
    IL2CPP_REGISTER_METHOD(0x0245C950, app::String*, Normalize_2, (app::String * source, int32_t type))
    IL2CPP_REGISTER_METHOD(0x0245CC10, void, load_normalization_resource, (app::void** props, app::void** mapped_chars, app::void** char_map_index, app::void** helper_index, app::void** map_idx_to_composite, app::void** combining_class))
    IL2CPP_REGISTER_METHOD(0x0245CC60, void, cctor, ())
} // namespace app::classes::System::Text::Normalization
