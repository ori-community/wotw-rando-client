#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour {
        namespace {
            inline app::FlutteringShotDownBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringShotDownBehaviour__Class** type_info = &type_info_ref;
        inline app::FlutteringShotDownBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringShotDownBehaviour__Class>(type_info, "Moon", "FlutteringShotDownBehaviour");
        }
        inline app::FlutteringShotDownBehaviour* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour
} // namespace app::classes::types
