#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JointProjectionMode__Enum__Class.h>
#include <Modloader/app/structs/JointProjectionMode__Enum.h>

namespace app::classes::types {
    namespace JointProjectionMode__Enum {
        namespace {
            inline app::JointProjectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::JointProjectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::JointProjectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::JointProjectionMode__Enum__Class>(type_info, "UnityEngine", "JointProjectionMode");
        }
        inline app::JointProjectionMode__Enum* create() {
            return il2cpp::create_object<app::JointProjectionMode__Enum>(get_class());
        }
    } // namespace JointProjectionMode__Enum
} // namespace app::classes::types
