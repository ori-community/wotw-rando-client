#pragma once
#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour {
        inline app::FlutteringSlamBehaviour__Class** type_info() {
            static app::FlutteringSlamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringSlamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringSlamBehaviour__Class>(type_info(), "Moon", "FlutteringSlamBehaviour");
        }
        inline app::FlutteringSlamBehaviour* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour>(get_class());
        }
    } // namespace FlutteringSlamBehaviour
} // namespace app::classes::types
