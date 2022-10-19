#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRScreenshots {
        inline app::CVRScreenshots__Class** type_info = (app::CVRScreenshots__Class**)(modloader::win::memory::resolve_rva(0x0472CB50));
        inline app::CVRScreenshots__Class* get_class() {
            return il2cpp::get_class<app::CVRScreenshots__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRScreenshots");
        }
        inline app::CVRScreenshots* create() {
            return il2cpp::create_object<app::CVRScreenshots>(get_class());
        }
    } // namespace CVRScreenshots
} // namespace app::classes::types
