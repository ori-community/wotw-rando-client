#pragma once
#include <Modloader/app/structs/PlaneUpdatedEventArgs.h>
#include <Modloader/app/structs/PlaneUpdatedEventArgs__Boxed.h>
#include <Modloader/app/structs/PlaneUpdatedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaneUpdatedEventArgs {
        inline app::PlaneUpdatedEventArgs__Class** type_info() {
            static app::PlaneUpdatedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaneUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472CF38));
            }
            return cache;
        }
        inline app::PlaneUpdatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PlaneUpdatedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "PlaneUpdatedEventArgs");
        }
        inline app::PlaneUpdatedEventArgs* create() {
            return il2cpp::create_object<app::PlaneUpdatedEventArgs>(get_class());
        }
        inline app::PlaneUpdatedEventArgs__Boxed* box(app::PlaneUpdatedEventArgs value) {
            return il2cpp::box_value<app::PlaneUpdatedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PlaneUpdatedEventArgs
} // namespace app::classes::types
