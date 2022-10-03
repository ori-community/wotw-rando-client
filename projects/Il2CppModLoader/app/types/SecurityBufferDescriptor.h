#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityBufferDescriptor {
        namespace {
            app::SecurityBufferDescriptor__Class* type_info_ref = nullptr;
        }
        app::SecurityBufferDescriptor__Class** type_info = &type_info_ref;
        inline app::SecurityBufferDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SecurityBufferDescriptor__Class>(type_info, "System.Net", "SecurityBufferDescriptor");
        }
        inline app::SecurityBufferDescriptor* create() {
            return il2cpp::create_object<app::SecurityBufferDescriptor>(get_class());
        }
    } // namespace SecurityBufferDescriptor
} // namespace app::classes::types
