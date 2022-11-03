#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlItemAction__Enum {
        namespace {
            inline app::ControlItemAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ControlItemAction__Enum__Class** type_info = &type_info_ref;
        inline app::ControlItemAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControlItemAction__Enum__Class>(type_info, "", "ControlItemAction");
        }
        inline app::ControlItemAction__Enum* create() {
            return il2cpp::create_object<app::ControlItemAction__Enum>(get_class());
        }
    } // namespace ControlItemAction__Enum
} // namespace app::classes::types
