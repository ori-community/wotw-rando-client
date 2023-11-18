#pragma once
#include <Modloader/app/structs/FlutteringShotDownBehaviour_States.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringShotDownBehaviour_States {
        inline app::FlutteringShotDownBehaviour_States__Class** type_info() {
            static app::FlutteringShotDownBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringShotDownBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x04786858));
            }
            return cache;
        }
        inline app::FlutteringShotDownBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringShotDownBehaviour_States__Class>(type_info(), "Moon", "FlutteringShotDownBehaviour", "States");
        }
        inline app::FlutteringShotDownBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringShotDownBehaviour_States>(get_class());
        }
    } // namespace FlutteringShotDownBehaviour_States
} // namespace app::classes::types
