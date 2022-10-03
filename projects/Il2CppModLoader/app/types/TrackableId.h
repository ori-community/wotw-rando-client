#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrackableId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrackableId__Class** type_info;
        inline app::TrackableId__Class* get_class() {
            return il2cpp::get_class<app::TrackableId__Class>(type_info, "UnityEngine.Experimental.XR", "TrackableId");
        }
        inline app::TrackableId* create() {
            return il2cpp::create_object<app::TrackableId>(get_class());
        }
        inline app::TrackableId__Boxed* box(app::TrackableId value) {
            return il2cpp::box_value<app::TrackableId__Boxed>(get_class(), value);
        }
    } // namespace TrackableId
} // namespace app::classes::types
