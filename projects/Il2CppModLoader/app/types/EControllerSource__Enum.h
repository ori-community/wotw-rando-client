#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EControllerSource__Enum {
        namespace {
            app::EControllerSource__Enum__Class* type_info_ref = nullptr;
        }
        app::EControllerSource__Enum__Class** type_info = &type_info_ref;
        inline app::EControllerSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerSource__Enum__Class>(type_info, "Steamworks", "EControllerSource");
        }
        inline app::EControllerSource__Enum* create() {
            return il2cpp::create_object<app::EControllerSource__Enum>(get_class());
        }
    } // namespace EControllerSource__Enum
} // namespace app::classes::types
