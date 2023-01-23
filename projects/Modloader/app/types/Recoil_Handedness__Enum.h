#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Recoil_Handedness__Enum__Class.h>
#include <Modloader/app/structs/Recoil_Handedness__Enum.h>

namespace app::classes::types {
    namespace Recoil_Handedness__Enum {
        namespace {
            inline app::Recoil_Handedness__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Recoil_Handedness__Enum__Class** type_info = &type_info_ref;
        inline app::Recoil_Handedness__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Recoil_Handedness__Enum__Class>(type_info, "RootMotion.FinalIK", "Recoil", "Handedness");
        }
        inline app::Recoil_Handedness__Enum* create() {
            return il2cpp::create_object<app::Recoil_Handedness__Enum>(get_class());
        }
    } // namespace Recoil_Handedness__Enum
} // namespace app::classes::types
