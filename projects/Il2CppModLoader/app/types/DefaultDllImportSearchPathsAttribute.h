#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultDllImportSearchPathsAttribute {
        namespace {
            app::DefaultDllImportSearchPathsAttribute__Class* type_info_ref = nullptr;
        }
        app::DefaultDllImportSearchPathsAttribute__Class** type_info = &type_info_ref;
        inline app::DefaultDllImportSearchPathsAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultDllImportSearchPathsAttribute__Class>(type_info, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
        }
        inline app::DefaultDllImportSearchPathsAttribute* create() {
            return il2cpp::create_object<app::DefaultDllImportSearchPathsAttribute>(get_class());
        }
    } // namespace DefaultDllImportSearchPathsAttribute
} // namespace app::classes::types
