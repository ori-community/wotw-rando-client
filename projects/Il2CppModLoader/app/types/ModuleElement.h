#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModuleElement {
        namespace {
            app::ModuleElement__Class* type_info_ref = nullptr;
        }
        app::ModuleElement__Class** type_info = &type_info_ref;
        inline app::ModuleElement__Class* get_class() {
            return il2cpp::get_class<app::ModuleElement__Class>(type_info, "System.Net.Configuration", "ModuleElement");
        }
        inline app::ModuleElement* create() {
            return il2cpp::create_object<app::ModuleElement>(get_class());
        }
    } // namespace ModuleElement
} // namespace app::classes::types
