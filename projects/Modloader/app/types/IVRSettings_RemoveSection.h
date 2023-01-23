#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVRSettings_RemoveSection__Class.h>
#include <Modloader/app/structs/IVRSettings_RemoveSection.h>

namespace app::classes::types {
    namespace IVRSettings_RemoveSection {
        inline app::IVRSettings_RemoveSection__Class** type_info = (app::IVRSettings_RemoveSection__Class**)(modloader::win::memory::resolve_rva(0x047036F8));
        inline app::IVRSettings_RemoveSection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_RemoveSection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_RemoveSection");
        }
        inline app::IVRSettings_RemoveSection* create() {
            return il2cpp::create_object<app::IVRSettings_RemoveSection>(get_class());
        }
    } // namespace IVRSettings_RemoveSection
} // namespace app::classes::types
