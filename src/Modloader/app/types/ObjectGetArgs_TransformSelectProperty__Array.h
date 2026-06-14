#pragma once
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty__Array.h>
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs_TransformSelectProperty__Array {
        inline app::ObjectGetArgs_TransformSelectProperty__Array__Class** type_info() {
            static app::ObjectGetArgs_TransformSelectProperty__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectGetArgs_TransformSelectProperty__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectGetArgs_TransformSelectProperty__Array__Class>(type_info(), "", "ObjectGetArgs+TransformSelectProperty[]");
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array* create() {
            return il2cpp::create_object<app::ObjectGetArgs_TransformSelectProperty__Array>(get_class());
        }
    } // namespace ObjectGetArgs_TransformSelectProperty__Array
} // namespace app::classes::types
