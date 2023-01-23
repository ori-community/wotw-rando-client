#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_States__Class.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_States.h>

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
