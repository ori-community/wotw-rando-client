#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDoor__Array {
        namespace {
            app::LegacyDoor__Array__Class* type_info_ref = nullptr;
        }
        app::LegacyDoor__Array__Class** type_info = &type_info_ref;
        inline app::LegacyDoor__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyDoor__Array__Class>(type_info, "", "LegacyDoor[]");
        }
        inline app::LegacyDoor__Array* create() {
            return il2cpp::create_object<app::LegacyDoor__Array>(get_class());
        }
    } // namespace LegacyDoor__Array
} // namespace app::classes::types
