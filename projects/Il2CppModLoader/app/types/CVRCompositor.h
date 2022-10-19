#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRCompositor {
        inline app::CVRCompositor__Class** type_info = (app::CVRCompositor__Class**)(modloader::win::memory::resolve_rva(0x0474B9F8));
        inline app::CVRCompositor__Class* get_class() {
            return il2cpp::get_class<app::CVRCompositor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRCompositor");
        }
        inline app::CVRCompositor* create() {
            return il2cpp::create_object<app::CVRCompositor>(get_class());
        }
    } // namespace CVRCompositor
} // namespace app::classes::types
