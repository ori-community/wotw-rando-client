#pragma once
#include <Modloader/app/structs/SecurityBufferDescriptor.h>
#include <Modloader/app/structs/SecurityBufferDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityBufferDescriptor {
        inline app::SecurityBufferDescriptor__Class** type_info() {
            static app::SecurityBufferDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityBufferDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityBufferDescriptor__Class* get_class() {
            return il2cpp::get_class<app::SecurityBufferDescriptor__Class>(type_info(), "System.Net", "SecurityBufferDescriptor");
        }
        inline app::SecurityBufferDescriptor* create() {
            return il2cpp::create_object<app::SecurityBufferDescriptor>(get_class());
        }
    } // namespace SecurityBufferDescriptor
} // namespace app::classes::types
