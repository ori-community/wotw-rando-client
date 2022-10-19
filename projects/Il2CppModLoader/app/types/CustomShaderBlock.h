#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomShaderBlock {
        namespace {
            inline app::CustomShaderBlock__Class* type_info_ref = nullptr;
        }
        inline app::CustomShaderBlock__Class** type_info = &type_info_ref;
        inline app::CustomShaderBlock__Class* get_class() {
            return il2cpp::get_class<app::CustomShaderBlock__Class>(type_info, "", "CustomShaderBlock");
        }
        inline app::CustomShaderBlock* create() {
            return il2cpp::create_object<app::CustomShaderBlock>(get_class());
        }
    } // namespace CustomShaderBlock
} // namespace app::classes::types
