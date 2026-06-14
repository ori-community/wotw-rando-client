#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UberShaderPrewarmer_PrewarmedShader_.h>
#include <Modloader/app/structs/Comparison_1_UberShaderPrewarmer_PrewarmedShader_.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberShaderPrewarmer_PrewarmedShader_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_UberShaderPrewarmer_PrewarmedShader_* this_ptr,
        app::UberShaderPrewarmer_PrewarmedShader x,
        app::UberShaderPrewarmer_PrewarmedShader y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberShaderPrewarmer_PrewarmedShader_
