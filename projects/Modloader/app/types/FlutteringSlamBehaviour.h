#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour {
        namespace {
            inline app::FlutteringSlamBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringSlamBehaviour__Class** type_info = &type_info_ref;
        inline app::FlutteringSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringSlamBehaviour__Class>(type_info, "Moon", "FlutteringSlamBehaviour");
        }
        inline app::FlutteringSlamBehaviour* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour>(get_class());
        }
    } // namespace FlutteringSlamBehaviour
} // namespace app::classes::types
