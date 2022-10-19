#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRCompositor_IsFullscreen {
        inline app::IVRCompositor_IsFullscreen__Class** type_info = (app::IVRCompositor_IsFullscreen__Class**)(modloader::win::memory::resolve_rva(0x04757AA0));
        inline app::IVRCompositor_IsFullscreen__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_IsFullscreen__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_IsFullscreen");
        }
        inline app::IVRCompositor_IsFullscreen* create() {
            return il2cpp::create_object<app::IVRCompositor_IsFullscreen>(get_class());
        }
    } // namespace IVRCompositor_IsFullscreen
} // namespace app::classes::types
