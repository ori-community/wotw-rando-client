#pragma once
#include <Modloader/app/structs/TrackableId.h>
#include <Modloader/app/structs/TrackableId__Boxed.h>
#include <Modloader/app/structs/TrackableId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackableId {
        inline app::TrackableId__Class** type_info() {
            static app::TrackableId__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrackableId__Class**)(modloader::win::memory::resolve_rva(0x04706A40));
            }
            return cache;
        }
        inline app::TrackableId__Class* get_class() {
            return il2cpp::get_class<app::TrackableId__Class>(type_info(), "UnityEngine.Experimental.XR", "TrackableId");
        }
        inline app::TrackableId* create() {
            return il2cpp::create_object<app::TrackableId>(get_class());
        }
        inline app::TrackableId__Boxed* box(app::TrackableId value) {
            return il2cpp::box_value<app::TrackableId__Boxed>(get_class(), value);
        }
    } // namespace TrackableId
} // namespace app::classes::types
