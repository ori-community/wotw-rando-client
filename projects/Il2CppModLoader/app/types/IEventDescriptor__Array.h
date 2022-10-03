#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEventDescriptor__Array {
        namespace {
            app::IEventDescriptor__Array__Class* type_info_ref = nullptr;
        }
        app::IEventDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::IEventDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::IEventDescriptor__Array__Class>(type_info, "Moon.Timeline", "IEventDescriptor[]");
        }
        inline app::IEventDescriptor__Array* create() {
            return il2cpp::create_object<app::IEventDescriptor__Array>(get_class());
        }
    } // namespace IEventDescriptor__Array
} // namespace app::classes::types
