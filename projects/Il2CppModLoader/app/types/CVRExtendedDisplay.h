#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRExtendedDisplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRExtendedDisplay__Class** type_info;
        inline app::CVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::CVRExtendedDisplay__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRExtendedDisplay");
        }
        inline app::CVRExtendedDisplay* create() {
            return il2cpp::create_object<app::CVRExtendedDisplay>(get_class());
        }
    } // namespace CVRExtendedDisplay
} // namespace app::classes::types
