#pragma once
#include <Modloader/app/structs/MinerDamagedBehavior.h>
#include <Modloader/app/structs/MinerDamagedBehavior__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerDamagedBehavior {
        inline app::MinerDamagedBehavior__Class** type_info() {
            static app::MinerDamagedBehavior__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerDamagedBehavior__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerDamagedBehavior__Class* get_class() {
            return il2cpp::get_class<app::MinerDamagedBehavior__Class>(type_info(), "", "MinerDamagedBehavior");
        }
        inline app::MinerDamagedBehavior* create() {
            return il2cpp::create_object<app::MinerDamagedBehavior>(get_class());
        }
    } // namespace MinerDamagedBehavior
} // namespace app::classes::types
