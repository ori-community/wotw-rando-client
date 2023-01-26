#pragma once
#include <Modloader/app/structs/PropertyChanges.h>
#include <Modloader/app/structs/PropertyChanges__Array.h>
#include <Modloader/app/structs/PropertyChanges__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyChanges {
        inline app::PropertyChanges__Class** type_info() {
            static app::PropertyChanges__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyChanges__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyChanges__Class* get_class() {
            return il2cpp::get_class<app::PropertyChanges__Class>(type_info(), "Moon.ReviewFramework", "PropertyChanges");
        }
        inline app::PropertyChanges* create() {
            return il2cpp::create_object<app::PropertyChanges>(get_class());
        }
        inline app::PropertyChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyChanges__Array>(get_class(), size);
        }
        inline app::PropertyChanges__Array* create_array(const std::vector<app::PropertyChanges*>& items) {
            return il2cpp::array_new<app::PropertyChanges__Array>(get_class(), items);
        }
    } // namespace PropertyChanges
} // namespace app::classes::types
