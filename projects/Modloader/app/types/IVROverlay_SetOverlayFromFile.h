#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayFromFile__Class.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayFromFile.h>

namespace app::classes::types {
    namespace IVROverlay_SetOverlayFromFile {
        inline app::IVROverlay_SetOverlayFromFile__Class** type_info = (app::IVROverlay_SetOverlayFromFile__Class**)(modloader::win::memory::resolve_rva(0x0475AAD0));
        inline app::IVROverlay_SetOverlayFromFile__Class* get_class() {
            return il2cpp::get_nested_class<app::IVROverlay_SetOverlayFromFile__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVROverlay", "_SetOverlayFromFile");
        }
        inline app::IVROverlay_SetOverlayFromFile* create() {
            return il2cpp::create_object<app::IVROverlay_SetOverlayFromFile>(get_class());
        }
    } // namespace IVROverlay_SetOverlayFromFile
} // namespace app::classes::types
