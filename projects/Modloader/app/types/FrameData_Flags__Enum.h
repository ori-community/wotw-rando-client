#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FrameData_Flags__Enum__Class.h>
#include <Modloader/app/structs/FrameData_Flags__Enum.h>

namespace app::classes::types {
    namespace FrameData_Flags__Enum {
        namespace {
            inline app::FrameData_Flags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FrameData_Flags__Enum__Class** type_info = &type_info_ref;
        inline app::FrameData_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FrameData_Flags__Enum__Class>(type_info, "UnityEngine.Playables", "FrameData", "Flags");
        }
        inline app::FrameData_Flags__Enum* create() {
            return il2cpp::create_object<app::FrameData_Flags__Enum>(get_class());
        }
    } // namespace FrameData_Flags__Enum
} // namespace app::classes::types
