#pragma once
#include <Modloader/app/structs/PlaneRemovedEventArgs.h>
#include <Modloader/app/structs/PlaneRemovedEventArgs__Boxed.h>
#include <Modloader/app/structs/PlaneRemovedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaneRemovedEventArgs {
        inline app::PlaneRemovedEventArgs__Class** type_info() {
            static app::PlaneRemovedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaneRemovedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04763580));
            }
            return cache;
        }
        inline app::PlaneRemovedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PlaneRemovedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "PlaneRemovedEventArgs");
        }
        inline app::PlaneRemovedEventArgs* create() {
            return il2cpp::create_object<app::PlaneRemovedEventArgs>(get_class());
        }
        inline app::PlaneRemovedEventArgs__Boxed* box(app::PlaneRemovedEventArgs value) {
            return il2cpp::box_value<app::PlaneRemovedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PlaneRemovedEventArgs
} // namespace app::classes::types
