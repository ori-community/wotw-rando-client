#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeLibImportClassAttribute {
        namespace {
            app::TypeLibImportClassAttribute__Class* type_info_ref = nullptr;
        }
        app::TypeLibImportClassAttribute__Class** type_info = &type_info_ref;
        inline app::TypeLibImportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeLibImportClassAttribute__Class>(type_info, "System.Runtime.InteropServices", "TypeLibImportClassAttribute");
        }
        inline app::TypeLibImportClassAttribute* create() {
            return il2cpp::create_object<app::TypeLibImportClassAttribute>(get_class());
        }
    } // namespace TypeLibImportClassAttribute
} // namespace app::classes::types
