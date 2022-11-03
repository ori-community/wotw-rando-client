#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SelectMode__Enum {
        namespace {
            inline app::SelectMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SelectMode__Enum__Class** type_info = &type_info_ref;
        inline app::SelectMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SelectMode__Enum__Class>(type_info, "System.Net.Sockets", "SelectMode");
        }
        inline app::SelectMode__Enum* create() {
            return il2cpp::create_object<app::SelectMode__Enum>(get_class());
        }
    } // namespace SelectMode__Enum
} // namespace app::classes::types
