#pragma once
#include <Modloader/app/structs/PropertyChanges__Array.h>
#include <Modloader/app/structs/PropertyChanges__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyChanges__Array {
        inline app::PropertyChanges__Array__Class** type_info() {
            static app::PropertyChanges__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyChanges__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyChanges__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyChanges__Array__Class>(type_info(), "Moon.ReviewFramework", "PropertyChanges[]");
        }
        inline app::PropertyChanges__Array* create() {
            return il2cpp::create_object<app::PropertyChanges__Array>(get_class());
        }
    } // namespace PropertyChanges__Array
} // namespace app::classes::types
