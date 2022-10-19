#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectSet {
        namespace {
            inline app::ObjectSet__Class* type_info_ref = nullptr;
        }
        inline app::ObjectSet__Class** type_info = &type_info_ref;
        inline app::ObjectSet__Class* get_class() {
            return il2cpp::get_class<app::ObjectSet__Class>(type_info, "PlayFab.PlayStreamModels", "ObjectSet");
        }
        inline app::ObjectSet* create() {
            return il2cpp::create_object<app::ObjectSet>(get_class());
        }
        inline app::ObjectSet__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectSet__Array>(get_class(), size);
        }
        inline app::ObjectSet__Array* create_array(const std::vector<app::ObjectSet*>& items) {
            return il2cpp::array_new<app::ObjectSet__Array>(get_class(), items);
        }
    } // namespace ObjectSet
} // namespace app::classes::types
