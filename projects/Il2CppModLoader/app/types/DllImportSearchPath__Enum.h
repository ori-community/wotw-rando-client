#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DllImportSearchPath__Enum {
        namespace {
            app::DllImportSearchPath__Enum__Class* type_info_ref = nullptr;
        }
        app::DllImportSearchPath__Enum__Class** type_info = &type_info_ref;
        inline app::DllImportSearchPath__Enum__Class* get_class() {
            return il2cpp::get_class<app::DllImportSearchPath__Enum__Class>(type_info, "System.Runtime.InteropServices", "DllImportSearchPath");
        }
        inline app::DllImportSearchPath__Enum* create() {
            return il2cpp::create_object<app::DllImportSearchPath__Enum>(get_class());
        }
    } // namespace DllImportSearchPath__Enum
} // namespace app::classes::types
