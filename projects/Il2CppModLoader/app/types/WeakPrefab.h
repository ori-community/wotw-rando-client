#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeakPrefab {
        namespace {
            inline app::WeakPrefab__Class* type_info_ref = nullptr;
        }
        inline app::WeakPrefab__Class** type_info = &type_info_ref;
        inline app::WeakPrefab__Class* get_class() {
            return il2cpp::get_class<app::WeakPrefab__Class>(type_info, "", "WeakPrefab");
        }
        inline app::WeakPrefab* create() {
            return il2cpp::create_object<app::WeakPrefab>(get_class());
        }
        inline app::WeakPrefab__Array* create_array(int size) {
            return il2cpp::array_new<app::WeakPrefab__Array>(get_class(), size);
        }
        inline app::WeakPrefab__Array* create_array(const std::vector<app::WeakPrefab*>& items) {
            return il2cpp::array_new<app::WeakPrefab__Array>(get_class(), items);
        }
    } // namespace WeakPrefab
} // namespace app::classes::types
