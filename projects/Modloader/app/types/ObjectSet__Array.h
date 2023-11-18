#pragma once
#include <Modloader/app/structs/ObjectSet__Array.h>
#include <Modloader/app/structs/ObjectSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectSet__Array {
        inline app::ObjectSet__Array__Class** type_info() {
            static app::ObjectSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectSet__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectSet__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "ObjectSet[]");
        }
        inline app::ObjectSet__Array* create() {
            return il2cpp::create_object<app::ObjectSet__Array>(get_class());
        }
    } // namespace ObjectSet__Array
} // namespace app::classes::types
