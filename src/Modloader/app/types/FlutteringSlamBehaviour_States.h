#pragma once
#include <Modloader/app/structs/FlutteringSlamBehaviour_States.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_States {
        inline app::FlutteringSlamBehaviour_States__Class** type_info() {
            static app::FlutteringSlamBehaviour_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringSlamBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x047506A8));
            }
            return cache;
        }
        inline app::FlutteringSlamBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_States__Class>(type_info(), "Moon", "FlutteringSlamBehaviour", "States");
        }
        inline app::FlutteringSlamBehaviour_States* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_States>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_States
} // namespace app::classes::types
