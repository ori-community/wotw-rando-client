#pragma once
#include <Modloader/app/structs/GameSession__Array.h>
#include <Modloader/app/structs/GameSession__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameSession__Array {
        inline app::GameSession__Array__Class** type_info() {
            static app::GameSession__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameSession__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameSession__Array__Class* get_class() {
            return il2cpp::get_class<app::GameSession__Array__Class>(type_info(), "Moon.Telemetry", "GameSession[]");
        }
        inline app::GameSession__Array* create() {
            return il2cpp::create_object<app::GameSession__Array>(get_class());
        }
    } // namespace GameSession__Array
} // namespace app::classes::types
