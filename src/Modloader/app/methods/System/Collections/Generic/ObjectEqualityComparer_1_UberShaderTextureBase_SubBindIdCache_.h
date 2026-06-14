#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_.h>
#include <Modloader/app/structs/UberShaderTextureBase_SubBindIdCache.h>
#include <Modloader/app/structs/UberShaderTextureBase_SubBindIdCache__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD3170,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr,
        app::UberShaderTextureBase_SubBindIdCache x,
        app::UberShaderTextureBase_SubBindIdCache y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr,
        app::UberShaderTextureBase_SubBindIdCache obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD3230,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr,
        app::UberShaderTextureBase_SubBindIdCache__Array* array,
        app::UberShaderTextureBase_SubBindIdCache value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD33B0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr,
        app::UberShaderTextureBase_SubBindIdCache__Array* array,
        app::UberShaderTextureBase_SubBindIdCache value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderTextureBase_SubBindIdCache_
