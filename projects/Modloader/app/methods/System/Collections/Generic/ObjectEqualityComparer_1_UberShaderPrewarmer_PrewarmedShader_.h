#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0840,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::UberShaderPrewarmer_PrewarmedShader x,
        app::UberShaderPrewarmer_PrewarmedShader y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::UberShaderPrewarmer_PrewarmedShader obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0960,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::UberShaderPrewarmer_PrewarmedShader__Array* array,
        app::UberShaderPrewarmer_PrewarmedShader value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0AD0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::UberShaderPrewarmer_PrewarmedShader__Array* array,
        app::UberShaderPrewarmer_PrewarmedShader value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UberShaderPrewarmer_PrewarmedShader_
