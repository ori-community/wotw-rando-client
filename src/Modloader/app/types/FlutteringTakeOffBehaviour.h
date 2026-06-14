#pragma once
#include <Modloader/app/structs/FlutteringTakeOffBehaviour.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringTakeOffBehaviour {
        inline app::FlutteringTakeOffBehaviour__Class** type_info() {
            static app::FlutteringTakeOffBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringTakeOffBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringTakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringTakeOffBehaviour__Class>(type_info(), "Moon", "FlutteringTakeOffBehaviour");
        }
        inline app::FlutteringTakeOffBehaviour* create() {
            return il2cpp::create_object<app::FlutteringTakeOffBehaviour>(get_class());
        }
    } // namespace FlutteringTakeOffBehaviour
} // namespace app::classes::types
