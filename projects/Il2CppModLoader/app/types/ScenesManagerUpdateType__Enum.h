#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerUpdateType__Enum {
        namespace {
            app::ScenesManagerUpdateType__Enum__Class* type_info_ref = nullptr;
        }
        app::ScenesManagerUpdateType__Enum__Class** type_info = &type_info_ref;
        inline app::ScenesManagerUpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerUpdateType__Enum__Class>(type_info, "", "ScenesManagerUpdateType");
        }
        inline app::ScenesManagerUpdateType__Enum* create() {
            return il2cpp::create_object<app::ScenesManagerUpdateType__Enum>(get_class());
        }
    } // namespace ScenesManagerUpdateType__Enum
} // namespace app::classes::types
