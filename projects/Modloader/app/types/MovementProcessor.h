#pragma once
#include <Modloader/app/structs/MovementProcessor.h>
#include <Modloader/app/structs/MovementProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovementProcessor {
        inline app::MovementProcessor__Class** type_info() {
            static app::MovementProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovementProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::MovementProcessor__Class>(type_info(), "Moon", "MovementProcessor");
        }
        inline app::MovementProcessor* create() {
            return il2cpp::create_object<app::MovementProcessor>(get_class());
        }
    } // namespace MovementProcessor
} // namespace app::classes::types
