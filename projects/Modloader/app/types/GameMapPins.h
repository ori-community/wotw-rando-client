#pragma once
#include <Modloader/app/structs/GameMapPins.h>
#include <Modloader/app/structs/GameMapPins__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapPins {
        inline app::GameMapPins__Class** type_info() {
            static app::GameMapPins__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameMapPins__Class**)(modloader::win::memory::resolve_rva(0x04719ED8));
            }
            return cache;
        }
        inline app::GameMapPins__Class* get_class() {
            return il2cpp::get_class<app::GameMapPins__Class>(type_info(), "", "GameMapPins");
        }
        inline app::GameMapPins* create() {
            return il2cpp::create_object<app::GameMapPins>(get_class());
        }
    } // namespace GameMapPins
} // namespace app::classes::types
