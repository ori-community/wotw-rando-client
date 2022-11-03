#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeFilterLevel__Enum {
        namespace {
            inline app::TypeFilterLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TypeFilterLevel__Enum__Class** type_info = &type_info_ref;
        inline app::TypeFilterLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeFilterLevel__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters", "TypeFilterLevel");
        }
        inline app::TypeFilterLevel__Enum* create() {
            return il2cpp::create_object<app::TypeFilterLevel__Enum>(get_class());
        }
    } // namespace TypeFilterLevel__Enum
} // namespace app::classes::types
