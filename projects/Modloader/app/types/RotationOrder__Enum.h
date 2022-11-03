#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationOrder__Enum {
        namespace {
            inline app::RotationOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RotationOrder__Enum__Class** type_info = &type_info_ref;
        inline app::RotationOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::RotationOrder__Enum__Class>(type_info, "UnityEngine", "RotationOrder");
        }
        inline app::RotationOrder__Enum* create() {
            return il2cpp::create_object<app::RotationOrder__Enum>(get_class());
        }
    } // namespace RotationOrder__Enum
} // namespace app::classes::types
