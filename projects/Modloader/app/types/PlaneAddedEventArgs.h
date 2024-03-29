#pragma once
#include <Modloader/app/structs/PlaneAddedEventArgs.h>
#include <Modloader/app/structs/PlaneAddedEventArgs__Boxed.h>
#include <Modloader/app/structs/PlaneAddedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaneAddedEventArgs {
        inline app::PlaneAddedEventArgs__Class** type_info() {
            static app::PlaneAddedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlaneAddedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476F900));
            }
            return cache;
        }
        inline app::PlaneAddedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PlaneAddedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "PlaneAddedEventArgs");
        }
        inline app::PlaneAddedEventArgs* create() {
            return il2cpp::create_object<app::PlaneAddedEventArgs>(get_class());
        }
        inline app::PlaneAddedEventArgs__Boxed* box(app::PlaneAddedEventArgs value) {
            return il2cpp::box_value<app::PlaneAddedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PlaneAddedEventArgs
} // namespace app::classes::types
