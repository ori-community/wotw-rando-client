#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSettings_RemoveKeyInSection {
        inline app::IVRSettings_RemoveKeyInSection__Class** type_info = (app::IVRSettings_RemoveKeyInSection__Class**)(modloader::win::memory::resolve_rva(0x0475F9A0));
        inline app::IVRSettings_RemoveKeyInSection__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSettings_RemoveKeyInSection__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSettings", "_RemoveKeyInSection");
        }
        inline app::IVRSettings_RemoveKeyInSection* create() {
            return il2cpp::create_object<app::IVRSettings_RemoveKeyInSection>(get_class());
        }
    } // namespace IVRSettings_RemoveKeyInSection
} // namespace app::classes::types
