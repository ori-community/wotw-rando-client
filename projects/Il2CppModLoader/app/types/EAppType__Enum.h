#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EAppType__Enum {
        namespace {
            app::EAppType__Enum__Class* type_info_ref = nullptr;
        }
        app::EAppType__Enum__Class** type_info = &type_info_ref;
        inline app::EAppType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAppType__Enum__Class>(type_info, "Steamworks", "EAppType");
        }
        inline app::EAppType__Enum* create() {
            return il2cpp::create_object<app::EAppType__Enum>(get_class());
        }
    } // namespace EAppType__Enum
} // namespace app::classes::types
