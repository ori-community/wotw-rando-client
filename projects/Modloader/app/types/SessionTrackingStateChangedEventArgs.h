#pragma once
#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs.h>
#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs__Boxed.h>
#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SessionTrackingStateChangedEventArgs {
        inline app::SessionTrackingStateChangedEventArgs__Class** type_info() {
            static app::SessionTrackingStateChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SessionTrackingStateChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04794170));
            }
            return cache;
        }
        inline app::SessionTrackingStateChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SessionTrackingStateChangedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "SessionTrackingStateChangedEventArgs");
        }
        inline app::SessionTrackingStateChangedEventArgs* create() {
            return il2cpp::create_object<app::SessionTrackingStateChangedEventArgs>(get_class());
        }
        inline app::SessionTrackingStateChangedEventArgs__Boxed* box(app::SessionTrackingStateChangedEventArgs value) {
            return il2cpp::box_value<app::SessionTrackingStateChangedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace SessionTrackingStateChangedEventArgs
} // namespace app::classes::types
