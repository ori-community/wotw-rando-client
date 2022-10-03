#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageDescriptor__Array {
        namespace {
            app::MessageDescriptor__Array__Class* type_info_ref = nullptr;
        }
        app::MessageDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::MessageDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageDescriptor__Array__Class>(type_info, "", "MessageDescriptor[]");
        }
        inline app::MessageDescriptor__Array* create() {
            return il2cpp::create_object<app::MessageDescriptor__Array>(get_class());
        }
    } // namespace MessageDescriptor__Array
} // namespace app::classes::types
