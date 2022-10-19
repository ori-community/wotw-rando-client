#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListChangedType__Enum {
        namespace {
            inline app::ListChangedType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ListChangedType__Enum__Class** type_info = &type_info_ref;
        inline app::ListChangedType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ListChangedType__Enum__Class>(type_info, "System.ComponentModel", "ListChangedType");
        }
        inline app::ListChangedType__Enum* create() {
            return il2cpp::create_object<app::ListChangedType__Enum>(get_class());
        }
    } // namespace ListChangedType__Enum
} // namespace app::classes::types
