#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_Submit {
        inline app::IVRCompositor_Submit__Class** type_info = (app::IVRCompositor_Submit__Class**)(modloader::win::memory::resolve_rva(0x04760750));
        inline app::IVRCompositor_Submit__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_Submit__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_Submit");
        }
        inline app::IVRCompositor_Submit* create() {
            return il2cpp::create_object<app::IVRCompositor_Submit>(get_class());
        }
    } // namespace IVRCompositor_Submit
} // namespace app::classes::types
