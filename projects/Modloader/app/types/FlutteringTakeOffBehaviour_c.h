#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_c.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour_c {
        inline app::FlutteringTakeOffBehaviour_c__Class** type_info() {
            static app::FlutteringTakeOffBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringTakeOffBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04705BD8));
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringTakeOffBehaviour_c__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour", "<>c");
        }
        inline app::FlutteringTakeOffBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour_c>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour_c
} // namespace app::classes::types
