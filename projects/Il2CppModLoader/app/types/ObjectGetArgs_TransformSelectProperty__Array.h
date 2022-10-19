#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectGetArgs_TransformSelectProperty__Array {
        namespace {
            inline app::ObjectGetArgs_TransformSelectProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array__Class** type_info = &type_info_ref;
        inline app::ObjectGetArgs_TransformSelectProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::ObjectGetArgs_TransformSelectProperty__Array__Class>(type_info, "", "ObjectGetArgs+TransformSelectProperty[]");
        }
        inline app::ObjectGetArgs_TransformSelectProperty__Array* create() {
            return il2cpp::create_object<app::ObjectGetArgs_TransformSelectProperty__Array>(get_class());
        }
    } // namespace ObjectGetArgs_TransformSelectProperty__Array
} // namespace app::classes::types
