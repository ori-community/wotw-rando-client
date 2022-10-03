#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SessionTrackingStateChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SessionTrackingStateChangedEventArgs__Class** type_info;
        inline app::SessionTrackingStateChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SessionTrackingStateChangedEventArgs__Class>(type_info, "UnityEngine.Experimental.XR", "SessionTrackingStateChangedEventArgs");
        }
        inline app::SessionTrackingStateChangedEventArgs* create() {
            return il2cpp::create_object<app::SessionTrackingStateChangedEventArgs>(get_class());
        }
        inline app::SessionTrackingStateChangedEventArgs__Boxed* box(app::SessionTrackingStateChangedEventArgs value) {
            return il2cpp::box_value<app::SessionTrackingStateChangedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace SessionTrackingStateChangedEventArgs
} // namespace app::classes::types
