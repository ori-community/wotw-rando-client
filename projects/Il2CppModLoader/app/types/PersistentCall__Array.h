#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PersistentCall__Array {
        namespace {
            app::PersistentCall__Array__Class* type_info_ref = nullptr;
        }
        app::PersistentCall__Array__Class** type_info = &type_info_ref;
        inline app::PersistentCall__Array__Class* get_class() {
            return il2cpp::get_class<app::PersistentCall__Array__Class>(type_info, "UnityEngine.Events", "PersistentCall[]");
        }
        inline app::PersistentCall__Array* create() {
            return il2cpp::create_object<app::PersistentCall__Array>(get_class());
        }
    } // namespace PersistentCall__Array
} // namespace app::classes::types
