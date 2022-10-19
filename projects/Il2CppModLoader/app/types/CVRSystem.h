#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRSystem {
        inline app::CVRSystem__Class** type_info = (app::CVRSystem__Class**)(modloader::win::memory::resolve_rva(0x0476C350));
        inline app::CVRSystem__Class* get_class() {
            return il2cpp::get_class<app::CVRSystem__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRSystem");
        }
        inline app::CVRSystem* create() {
            return il2cpp::create_object<app::CVRSystem>(get_class());
        }
    } // namespace CVRSystem
} // namespace app::classes::types
