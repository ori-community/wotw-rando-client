#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRuntimeAnchoredTexture__Array {
        namespace {
            inline app::UberShaderRuntimeAnchoredTexture__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderRuntimeAnchoredTexture__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeAnchoredTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeAnchoredTexture__Array__Class>(type_info, "", "UberShaderRuntimeAnchoredTexture[]");
        }
        inline app::UberShaderRuntimeAnchoredTexture__Array* create() {
            return il2cpp::create_object<app::UberShaderRuntimeAnchoredTexture__Array>(get_class());
        }
    } // namespace UberShaderRuntimeAnchoredTexture__Array
} // namespace app::classes::types
