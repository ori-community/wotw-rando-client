#pragma once
#include <Modloader/app/structs/CustomTypeDescriptor.h>
#include <Modloader/app/structs/CustomTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomTypeDescriptor {
        inline app::CustomTypeDescriptor__Class** type_info() {
            static app::CustomTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomTypeDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::CustomTypeDescriptor__Class>(type_info(), "System.ComponentModel", "CustomTypeDescriptor");
        }
        inline app::CustomTypeDescriptor* create() {
            return il2cpp::create_object<app::CustomTypeDescriptor>(get_class());
        }
    } // namespace CustomTypeDescriptor
} // namespace app::classes::types
