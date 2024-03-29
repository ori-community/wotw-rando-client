#pragma once
#include <Modloader/app/structs/ObjectGetArgs_TransformProperty.h>
#include <Modloader/app/structs/ObjectGetArgs_TransformProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_TransformProperty {
        inline app::ObjectGetArgs_TransformProperty__Class** type_info() {
            static app::ObjectGetArgs_TransformProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectGetArgs_TransformProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectGetArgs_TransformProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectGetArgs_TransformProperty__Class>(type_info(), "", "ObjectGetArgs", "TransformProperty");
        }
        inline app::ObjectGetArgs_TransformProperty* create() {
            return il2cpp::create_object<app::ObjectGetArgs_TransformProperty>(get_class());
        }
    } // namespace ObjectGetArgs_TransformProperty
} // namespace app::classes::types
