#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_States {
        inline app::FlutteringShotDownBehaviour_States__Class** type_info = (app::FlutteringShotDownBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04786858));
        inline app::FlutteringShotDownBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_States__Class>(type_info, "Moon", "FlutteringShotDownBehaviour", "States");
        }
        inline app::FlutteringShotDownBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_States>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_States
} // namespace app::classes::types
