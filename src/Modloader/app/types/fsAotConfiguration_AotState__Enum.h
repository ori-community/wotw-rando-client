#pragma once
#include <Modloader/app/structs/fsAotConfiguration_AotState__Enum.h>
#include <Modloader/app/structs/fsAotConfiguration_AotState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsAotConfiguration_AotState__Enum {
        inline app::fsAotConfiguration_AotState__Enum__Class** type_info() {
            static app::fsAotConfiguration_AotState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsAotConfiguration_AotState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsAotConfiguration_AotState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotConfiguration_AotState__Enum__Class>(type_info(), "FullSerializer", "fsAotConfiguration", "AotState");
        }
        inline app::fsAotConfiguration_AotState__Enum* create() {
            return il2cpp::create_object<app::fsAotConfiguration_AotState__Enum>(get_class());
        }
    } // namespace fsAotConfiguration_AotState__Enum
} // namespace app::classes::types
