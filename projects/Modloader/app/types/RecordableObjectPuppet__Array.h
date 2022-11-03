#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordableObjectPuppet__Array {
        namespace {
            inline app::RecordableObjectPuppet__Array__Class* type_info_ref = nullptr;
        }
        inline app::RecordableObjectPuppet__Array__Class** type_info = &type_info_ref;
        inline app::RecordableObjectPuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordableObjectPuppet__Array__Class>(type_info, "", "RecordableObjectPuppet[]");
        }
        inline app::RecordableObjectPuppet__Array* create() {
            return il2cpp::create_object<app::RecordableObjectPuppet__Array>(get_class());
        }
    } // namespace RecordableObjectPuppet__Array
} // namespace app::classes::types
