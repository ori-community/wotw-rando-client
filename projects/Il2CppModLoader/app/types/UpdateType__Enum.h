#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateType__Enum {
        namespace {
            app::UpdateType__Enum__Class* type_info_ref = nullptr;
        }
        app::UpdateType__Enum__Class** type_info = &type_info_ref;
        inline app::UpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UpdateType__Enum__Class>(type_info, "Moon", "UpdateType");
        }
        inline app::UpdateType__Enum* create() {
            return il2cpp::create_object<app::UpdateType__Enum>(get_class());
        }
    } // namespace UpdateType__Enum
} // namespace app::classes::types
