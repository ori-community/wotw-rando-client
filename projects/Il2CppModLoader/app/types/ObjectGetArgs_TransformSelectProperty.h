#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_TransformSelectProperty {
        namespace {
            app::ObjectGetArgs_TransformSelectProperty__Class* type_info_ref = nullptr;
        }
        app::ObjectGetArgs_TransformSelectProperty__Class** type_info = &type_info_ref;
        inline app::ObjectGetArgs_TransformSelectProperty__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectGetArgs_TransformSelectProperty__Class>(type_info, "", "ObjectGetArgs", "TransformSelectProperty");
        }
        inline app::ObjectGetArgs_TransformSelectProperty* create() {
            return il2cpp::create_object<app::ObjectGetArgs_TransformSelectProperty>(get_class());
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::ObjectGetArgs_TransformSelectProperty__Array>(get_class(), size);
        }
    } // namespace ObjectGetArgs_TransformSelectProperty
} // namespace app::classes::types
