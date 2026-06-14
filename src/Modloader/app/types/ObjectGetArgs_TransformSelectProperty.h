#pragma once
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty.h>
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty__Array.h>
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_TransformSelectProperty {
        inline app::ObjectGetArgs_TransformSelectProperty__Class** type_info() {
            static app::ObjectGetArgs_TransformSelectProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectGetArgs_TransformSelectProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectGetArgs_TransformSelectProperty__Class>(type_info(), "", "ObjectGetArgs", "TransformSelectProperty");
        }
        inline app::ObjectGetArgs_TransformSelectProperty* create() {
            return il2cpp::create_object<app::ObjectGetArgs_TransformSelectProperty>(get_class());
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectGetArgs_TransformSelectProperty__Array>(get_class(), size);
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array* create_array(const std::vector<app::ObjectGetArgs_TransformSelectProperty*>& items) {
            return il2cpp::array_new<app::ObjectGetArgs_TransformSelectProperty__Array>(get_class(), items);
        }
    } // namespace ObjectGetArgs_TransformSelectProperty
} // namespace app::classes::types
