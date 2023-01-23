#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MessageDescriptor__Array__Class.h>
#include <Modloader/app/structs/MessageDescriptor__Array.h>

namespace app::classes::types {
    namespace MessageDescriptor__Array {
        namespace {
            inline app::MessageDescriptor__Array__Class* type_info_ref = nullptr;
        }
        inline app::MessageDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::MessageDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageDescriptor__Array__Class>(type_info, "", "MessageDescriptor[]");
        }
        inline app::MessageDescriptor__Array* create() {
            return il2cpp::create_object<app::MessageDescriptor__Array>(get_class());
        }
    } // namespace MessageDescriptor__Array
} // namespace app::classes::types
