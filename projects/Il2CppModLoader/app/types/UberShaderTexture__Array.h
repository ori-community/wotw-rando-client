#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderTexture__Array {
        namespace {
            inline app::UberShaderTexture__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderTexture__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTexture__Array__Class>(type_info, "", "UberShaderTexture[]");
        }
        inline app::UberShaderTexture__Array* create() {
            return il2cpp::create_object<app::UberShaderTexture__Array>(get_class());
        }
    } // namespace UberShaderTexture__Array
} // namespace app::classes::types
