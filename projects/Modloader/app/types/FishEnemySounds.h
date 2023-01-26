#pragma once
#include <Modloader/app/structs/FishEnemySounds.h>
#include <Modloader/app/structs/FishEnemySounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemySounds {
        inline app::FishEnemySounds__Class** type_info() {
            static app::FishEnemySounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemySounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::FishEnemySounds__Class>(type_info(), "", "FishEnemySounds");
        }
        inline app::FishEnemySounds* create() {
            return il2cpp::create_object<app::FishEnemySounds>(get_class());
        }
    } // namespace FishEnemySounds
} // namespace app::classes::types
