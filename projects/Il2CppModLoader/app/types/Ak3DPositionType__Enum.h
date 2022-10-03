#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ak3DPositionType__Enum {
        namespace {
            app::Ak3DPositionType__Enum__Class* type_info_ref = nullptr;
        }
        app::Ak3DPositionType__Enum__Class** type_info = &type_info_ref;
        inline app::Ak3DPositionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::Ak3DPositionType__Enum__Class>(type_info, "", "Ak3DPositionType");
        }
        inline app::Ak3DPositionType__Enum* create() {
            return il2cpp::create_object<app::Ak3DPositionType__Enum>(get_class());
        }
    } // namespace Ak3DPositionType__Enum
} // namespace app::classes::types
