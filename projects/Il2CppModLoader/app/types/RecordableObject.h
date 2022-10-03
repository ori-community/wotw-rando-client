#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordableObject {
        namespace {
            app::RecordableObject__Class* type_info_ref = nullptr;
        }
        app::RecordableObject__Class** type_info = &type_info_ref;
        inline app::RecordableObject__Class* get_class() {
            return il2cpp::get_class<app::RecordableObject__Class>(type_info, "", "RecordableObject");
        }
        inline app::RecordableObject* create() {
            return il2cpp::create_object<app::RecordableObject>(get_class());
        }
        inline app::RecordableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordableObject__Array>(get_class(), size);
        }
    } // namespace RecordableObject
} // namespace app::classes::types
