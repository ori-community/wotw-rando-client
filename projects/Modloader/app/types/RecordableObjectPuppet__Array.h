#pragma once
#include <Modloader/app/structs/RecordableObjectPuppet__Array.h>
#include <Modloader/app/structs/RecordableObjectPuppet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableObjectPuppet__Array {
        inline app::RecordableObjectPuppet__Array__Class** type_info() {
            static app::RecordableObjectPuppet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableObjectPuppet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableObjectPuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordableObjectPuppet__Array__Class>(type_info(), "", "RecordableObjectPuppet[]");
        }
        inline app::RecordableObjectPuppet__Array* create() {
            return il2cpp::create_object<app::RecordableObjectPuppet__Array>(get_class());
        }
    } // namespace RecordableObjectPuppet__Array
} // namespace app::classes::types
