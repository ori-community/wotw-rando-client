#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_c {
        inline app::FlutteringSlamBehaviour_c__Class** type_info = (app::FlutteringSlamBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04733F38));
        inline app::FlutteringSlamBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_c__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "<>c");
        }
        inline app::FlutteringSlamBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_c>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_c
} // namespace app::classes::types
