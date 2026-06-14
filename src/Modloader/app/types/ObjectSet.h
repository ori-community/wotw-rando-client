#pragma once
#include <Modloader/app/structs/ObjectSet.h>
#include <Modloader/app/structs/ObjectSet__Array.h>
#include <Modloader/app/structs/ObjectSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectSet {
        inline app::ObjectSet__Class** type_info() {
            static app::ObjectSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectSet__Class* get_class() {
            return il2cpp::get_class<app::ObjectSet__Class>(type_info(), "PlayFab.PlayStreamModels", "ObjectSet");
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
