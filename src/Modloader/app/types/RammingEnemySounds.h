#pragma once
#include <Modloader/app/structs/RammingEnemySounds.h>
#include <Modloader/app/structs/RammingEnemySounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemySounds {
        inline app::RammingEnemySounds__Class** type_info() {
            static app::RammingEnemySounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemySounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySounds__Class>(type_info(), "", "RammingEnemySounds");
        }
        inline app::RammingEnemySounds* create() {
            return il2cpp::create_object<app::RammingEnemySounds>(get_class());
        }
    } // namespace RammingEnemySounds
} // namespace app::classes::types
