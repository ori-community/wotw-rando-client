#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModuleBuilder {
        namespace {
            inline app::ModuleBuilder__Class* type_info_ref = nullptr;
        }
        inline app::ModuleBuilder__Class** type_info = &type_info_ref;
        inline app::ModuleBuilder__Class* get_class() {
            return il2cpp::get_class<app::ModuleBuilder__Class>(type_info, "System.Reflection.Emit", "ModuleBuilder");
        }
        inline app::ModuleBuilder* create() {
            return il2cpp::create_object<app::ModuleBuilder>(get_class());
        }
    } // namespace ModuleBuilder
} // namespace app::classes::types
