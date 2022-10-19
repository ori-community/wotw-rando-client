#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CVRNotifications {
        namespace {
            inline app::CVRNotifications__Class* type_info_ref = nullptr;
        }
        inline app::CVRNotifications__Class** type_info = &type_info_ref;
        inline app::CVRNotifications__Class* get_class() {
            return il2cpp::get_class<app::CVRNotifications__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRNotifications");
        }
        inline app::CVRNotifications* create() {
            return il2cpp::create_object<app::CVRNotifications>(get_class());
        }
    } // namespace CVRNotifications
} // namespace app::classes::types
