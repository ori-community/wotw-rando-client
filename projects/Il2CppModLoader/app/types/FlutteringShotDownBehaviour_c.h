#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_c {
        inline app::FlutteringShotDownBehaviour_c__Class** type_info = (app::FlutteringShotDownBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0477C318));
        inline app::FlutteringShotDownBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_c__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "<>c");
        }
        inline app::FlutteringShotDownBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_c>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_c
} // namespace app::classes::types
