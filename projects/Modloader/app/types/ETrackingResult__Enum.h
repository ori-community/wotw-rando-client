#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ETrackingResult__Enum {
        namespace {
            inline app::ETrackingResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ETrackingResult__Enum__Class** type_info = &type_info_ref;
        inline app::ETrackingResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::ETrackingResult__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "ETrackingResult");
        }
        inline app::ETrackingResult__Enum* create() {
            return il2cpp::create_object<app::ETrackingResult__Enum>(get_class());
        }
    } // namespace ETrackingResult__Enum
} // namespace app::classes::types
