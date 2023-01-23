#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OpenVRInterop__Class.h>
#include <Modloader/app/structs/OpenVRInterop.h>

namespace app::classes::types {
    namespace OpenVRInterop {
        namespace {
            inline app::OpenVRInterop__Class* type_info_ref = nullptr;
        }
        inline app::OpenVRInterop__Class** type_info = &type_info_ref;
        inline app::OpenVRInterop__Class* get_class() {
            return il2cpp::get_class<app::OpenVRInterop__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "OpenVRInterop");
        }
        inline app::OpenVRInterop* create() {
            return il2cpp::create_object<app::OpenVRInterop>(get_class());
        }
    } // namespace OpenVRInterop
} // namespace app::classes::types
