#pragma once
#include <Modloader/app/structs/RecordableObject.h>
#include <Modloader/app/structs/RecordableObject__Array.h>
#include <Modloader/app/structs/RecordableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableObject {
        inline app::RecordableObject__Class** type_info() {
            static app::RecordableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableObject__Class* get_class() {
            return il2cpp::get_class<app::RecordableObject__Class>(type_info(), "", "RecordableObject");
        }
        inline app::RecordableObject* create() {
            return il2cpp::create_object<app::RecordableObject>(get_class());
        }
        inline app::RecordableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordableObject__Array>(get_class(), size);
        }
        inline app::RecordableObject__Array* create_array(const std::vector<app::RecordableObject*>& items) {
            return il2cpp::array_new<app::RecordableObject__Array>(get_class(), items);
        }
    } // namespace RecordableObject
} // namespace app::classes::types
