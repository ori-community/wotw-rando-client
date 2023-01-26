#pragma once
#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour {
        inline app::FlutteringShotDownBehaviour__Class** type_info() {
            static app::FlutteringShotDownBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringShotDownBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringShotDownBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringShotDownBehaviour__Class>(type_info(), "Moon", "FlutteringShotDownBehaviour");
        }
        inline app::FlutteringShotDownBehaviour* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour
} // namespace app::classes::types
