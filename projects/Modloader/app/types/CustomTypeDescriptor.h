#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CustomTypeDescriptor__Class.h>
#include <Modloader/app/structs/CustomTypeDescriptor.h>

namespace app::classes::types {
    namespace CustomTypeDescriptor {
        namespace {
            inline app::CustomTypeDescriptor__Class* type_info_ref = nullptr;
        }
        inline app::CustomTypeDescriptor__Class** type_info = &type_info_ref;
        inline app::CustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::CustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "CustomTypeDescriptor");
        }
        inline app::CustomTypeDescriptor* create() {
            return il2cpp::create_object<app::CustomTypeDescriptor>(get_class());
        }
    } // namespace CustomTypeDescriptor
} // namespace app::classes::types
