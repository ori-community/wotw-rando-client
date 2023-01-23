#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum__Class.h>
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum.h>

namespace app::classes::types {
    namespace VRMessageOverlayResponse__Enum {
        namespace {
            inline app::VRMessageOverlayResponse__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VRMessageOverlayResponse__Enum__Class** type_info = &type_info_ref;
        inline app::VRMessageOverlayResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::VRMessageOverlayResponse__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VRMessageOverlayResponse");
        }
        inline app::VRMessageOverlayResponse__Enum* create() {
            return il2cpp::create_object<app::VRMessageOverlayResponse__Enum>(get_class());
        }
    } // namespace VRMessageOverlayResponse__Enum
} // namespace app::classes::types
