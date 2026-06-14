#pragma once
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#include <Modloader/app/structs/XmlReadMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReadMode__Enum {
        inline app::XmlReadMode__Enum__Class** type_info() {
            static app::XmlReadMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlReadMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlReadMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlReadMode__Enum__Class>(type_info(), "System.Data", "XmlReadMode");
        }
        inline app::XmlReadMode__Enum* create() {
            return il2cpp::create_object<app::XmlReadMode__Enum>(get_class());
        }
    } // namespace XmlReadMode__Enum
} // namespace app::classes::types
