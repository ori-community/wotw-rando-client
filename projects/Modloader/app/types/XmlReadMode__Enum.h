#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlReadMode__Enum__Class.h>
#include <Modloader/app/structs/XmlReadMode__Enum.h>

namespace app::classes::types {
    namespace XmlReadMode__Enum {
        namespace {
            inline app::XmlReadMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlReadMode__Enum__Class** type_info = &type_info_ref;
        inline app::XmlReadMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlReadMode__Enum__Class>(type_info, "System.Data", "XmlReadMode");
        }
        inline app::XmlReadMode__Enum* create() {
            return il2cpp::create_object<app::XmlReadMode__Enum>(get_class());
        }
    } // namespace XmlReadMode__Enum
} // namespace app::classes::types
