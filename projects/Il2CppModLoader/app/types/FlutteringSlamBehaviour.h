#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour {
        namespace {
            app::FlutteringSlamBehaviour__Class* type_info_ref = nullptr;
        }
        app::FlutteringSlamBehaviour__Class** type_info = &type_info_ref;
        inline app::FlutteringSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringSlamBehaviour__Class>(type_info, "Moon", "FlutteringSlamBehaviour");
        }
        inline app::FlutteringSlamBehaviour* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour>(get_class());
        }
    } // namespace FlutteringSlamBehaviour
} // namespace app::classes::types
