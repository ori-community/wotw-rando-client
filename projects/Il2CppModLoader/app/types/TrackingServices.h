#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackingServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrackingServices__Class** type_info;
        inline app::TrackingServices__Class* get_class() {
            return il2cpp::get_class<app::TrackingServices__Class>(type_info, "System.Runtime.Remoting.Services", "TrackingServices");
        }
        inline app::TrackingServices* create() {
            return il2cpp::create_object<app::TrackingServices>(get_class());
        }
    } // namespace TrackingServices
} // namespace app::classes::types
