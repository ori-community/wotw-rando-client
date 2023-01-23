#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCTextCylinderWrapper_WrapMode__Enum__Class.h>
#include <Modloader/app/structs/CCTextCylinderWrapper_WrapMode__Enum.h>

namespace app::classes::types {
    namespace CCTextCylinderWrapper_WrapMode__Enum {
        namespace {
            inline app::CCTextCylinderWrapper_WrapMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CCTextCylinderWrapper_WrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCTextCylinderWrapper_WrapMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCTextCylinderWrapper_WrapMode__Enum__Class>(type_info, "", "CCTextCylinderWrapper", "WrapMode");
        }
        inline app::CCTextCylinderWrapper_WrapMode__Enum* create() {
            return il2cpp::create_object<app::CCTextCylinderWrapper_WrapMode__Enum>(get_class());
        }
    } // namespace CCTextCylinderWrapper_WrapMode__Enum
} // namespace app::classes::types
