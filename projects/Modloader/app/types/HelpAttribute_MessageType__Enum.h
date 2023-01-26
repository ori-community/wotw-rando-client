#pragma once
#include <Modloader/app/structs/HelpAttribute_MessageType__Enum.h>
#include <Modloader/app/structs/HelpAttribute_MessageType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HelpAttribute_MessageType__Enum {
        inline app::HelpAttribute_MessageType__Enum__Class** type_info() {
            static app::HelpAttribute_MessageType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HelpAttribute_MessageType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HelpAttribute_MessageType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HelpAttribute_MessageType__Enum__Class>(type_info(), "Moon.Attributes", "HelpAttribute", "MessageType");
        }
        inline app::HelpAttribute_MessageType__Enum* create() {
            return il2cpp::create_object<app::HelpAttribute_MessageType__Enum>(get_class());
        }
    } // namespace HelpAttribute_MessageType__Enum
} // namespace app::classes::types
