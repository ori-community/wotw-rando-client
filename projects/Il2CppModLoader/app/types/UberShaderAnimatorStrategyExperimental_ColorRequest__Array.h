#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorRequest__Array {
        namespace {
            inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+ColorRequest[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorRequest__Array
} // namespace app::classes::types
