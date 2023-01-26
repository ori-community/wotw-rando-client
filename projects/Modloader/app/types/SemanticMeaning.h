#pragma once
#include <Modloader/app/structs/SemanticMeaning.h>
#include <Modloader/app/structs/SemanticMeaning__Array.h>
#include <Modloader/app/structs/SemanticMeaning__Boxed.h>
#include <Modloader/app/structs/SemanticMeaning__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SemanticMeaning {
        inline app::SemanticMeaning__Class** type_info() {
            static app::SemanticMeaning__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SemanticMeaning__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SemanticMeaning__Class* get_class() {
            return il2cpp::get_class<app::SemanticMeaning__Class>(type_info(), "UnityEngine.Windows.Speech", "SemanticMeaning");
        }
        inline app::SemanticMeaning* create() {
            return il2cpp::create_object<app::SemanticMeaning>(get_class());
        }
        inline app::SemanticMeaning__Boxed* box(app::SemanticMeaning value) {
            return il2cpp::box_value<app::SemanticMeaning__Boxed>(get_class(), value);
        }
        inline app::SemanticMeaning__Array* create_array(int size) {
            return il2cpp::array_new<app::SemanticMeaning__Array>(get_class(), size);
        }
        inline app::SemanticMeaning__Array* create_array(const std::vector<app::SemanticMeaning>& items) {
            return il2cpp::array_new<app::SemanticMeaning__Array>(get_class(), items);
        }
    } // namespace SemanticMeaning
} // namespace app::classes::types
