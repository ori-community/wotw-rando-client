#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsAotConfiguration_AotState__Enum {
        namespace {
            inline app::fsAotConfiguration_AotState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::fsAotConfiguration_AotState__Enum__Class** type_info = &type_info_ref;
        inline app::fsAotConfiguration_AotState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotConfiguration_AotState__Enum__Class>(type_info, "FullSerializer", "fsAotConfiguration", "AotState");
        }
        inline app::fsAotConfiguration_AotState__Enum* create() {
            return il2cpp::create_object<app::fsAotConfiguration_AotState__Enum>(get_class());
        }
    } // namespace fsAotConfiguration_AotState__Enum
} // namespace app::classes::types
