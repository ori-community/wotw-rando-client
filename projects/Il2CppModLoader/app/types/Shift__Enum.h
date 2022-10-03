#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Shift__Enum {
        namespace {
            app::Shift__Enum__Class* type_info_ref = nullptr;
        }
        app::Shift__Enum__Class** type_info = &type_info_ref;
        inline app::Shift__Enum__Class* get_class() {
            return il2cpp::get_class<app::Shift__Enum__Class>(type_info, "", "Shift");
        }
        inline app::Shift__Enum* create() {
            return il2cpp::create_object<app::Shift__Enum>(get_class());
        }
    } // namespace Shift__Enum
} // namespace app::classes::types
