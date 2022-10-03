#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Formatting__Enum {
        namespace {
            app::Formatting__Enum__Class* type_info_ref = nullptr;
        }
        app::Formatting__Enum__Class** type_info = &type_info_ref;
        inline app::Formatting__Enum__Class* get_class() {
            return il2cpp::get_class<app::Formatting__Enum__Class>(type_info, "System.Xml", "Formatting");
        }
        inline app::Formatting__Enum* create() {
            return il2cpp::create_object<app::Formatting__Enum>(get_class());
        }
    } // namespace Formatting__Enum
} // namespace app::classes::types
