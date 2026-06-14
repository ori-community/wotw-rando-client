#pragma once
#include <Modloader/app/structs/MessageDescriptor__Array.h>
#include <Modloader/app/structs/MessageDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageDescriptor__Array {
        inline app::MessageDescriptor__Array__Class** type_info() {
            static app::MessageDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageDescriptor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageDescriptor__Array__Class>(type_info(), "", "MessageDescriptor[]");
        }
        inline app::MessageDescriptor__Array* create() {
            return il2cpp::create_object<app::MessageDescriptor__Array>(get_class());
        }
    } // namespace MessageDescriptor__Array
} // namespace app::classes::types
