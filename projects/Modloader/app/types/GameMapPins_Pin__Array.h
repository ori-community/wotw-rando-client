#pragma once
#include <Modloader/app/structs/GameMapPins_Pin__Array.h>
#include <Modloader/app/structs/GameMapPins_Pin__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapPins_Pin__Array {
        inline app::GameMapPins_Pin__Array__Class** type_info() {
            static app::GameMapPins_Pin__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapPins_Pin__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapPins_Pin__Array__Class* get_class() {
            return il2cpp::get_class<app::GameMapPins_Pin__Array__Class>(type_info(), "", "GameMapPins+Pin[]");
        }
        inline app::GameMapPins_Pin__Array* create() {
            return il2cpp::create_object<app::GameMapPins_Pin__Array>(get_class());
        }
    } // namespace GameMapPins_Pin__Array
} // namespace app::classes::types
