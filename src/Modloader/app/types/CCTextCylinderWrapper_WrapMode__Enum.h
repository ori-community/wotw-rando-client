#pragma once
#include <Modloader/app/structs/CCTextCylinderWrapper_WrapMode__Enum.h>
#include <Modloader/app/structs/CCTextCylinderWrapper_WrapMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCTextCylinderWrapper_WrapMode__Enum {
        inline app::CCTextCylinderWrapper_WrapMode__Enum__Class** type_info() {
            static app::CCTextCylinderWrapper_WrapMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCTextCylinderWrapper_WrapMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCTextCylinderWrapper_WrapMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCTextCylinderWrapper_WrapMode__Enum__Class>(type_info(), "", "CCTextCylinderWrapper", "WrapMode");
        }
        inline app::CCTextCylinderWrapper_WrapMode__Enum* create() {
            return il2cpp::create_object<app::CCTextCylinderWrapper_WrapMode__Enum>(get_class());
        }
    } // namespace CCTextCylinderWrapper_WrapMode__Enum
} // namespace app::classes::types
