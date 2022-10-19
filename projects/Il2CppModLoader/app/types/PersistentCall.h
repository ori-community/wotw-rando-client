#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PersistentCall {
        namespace {
            inline app::PersistentCall__Class* type_info_ref = nullptr;
        }
        inline app::PersistentCall__Class** type_info = &type_info_ref;
        inline app::PersistentCall__Class* get_class() {
            return il2cpp::get_class<app::PersistentCall__Class>(type_info, "UnityEngine.Events", "PersistentCall");
        }
        inline app::PersistentCall* create() {
            return il2cpp::create_object<app::PersistentCall>(get_class());
        }
        inline app::PersistentCall__Array* create_array(int size) {
            return il2cpp::array_new<app::PersistentCall__Array>(get_class(), size);
        }
        inline app::PersistentCall__Array* create_array(const std::vector<app::PersistentCall*>& items) {
            return il2cpp::array_new<app::PersistentCall__Array>(get_class(), items);
        }
    } // namespace PersistentCall
} // namespace app::classes::types
