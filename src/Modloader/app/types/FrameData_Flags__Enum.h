#pragma once
#include <Modloader/app/structs/FrameData_Flags__Enum.h>
#include <Modloader/app/structs/FrameData_Flags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameData_Flags__Enum {
        inline app::FrameData_Flags__Enum__Class** type_info() {
            static app::FrameData_Flags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrameData_Flags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrameData_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameData_Flags__Enum__Class>(type_info(), "UnityEngine.Playables", "FrameData", "Flags");
        }
        inline app::FrameData_Flags__Enum* create() {
            return il2cpp::create_object<app::FrameData_Flags__Enum>(get_class());
        }
    } // namespace FrameData_Flags__Enum
} // namespace app::classes::types
