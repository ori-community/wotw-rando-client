#pragma once
#include <Modloader/app/structs/MinerIdle.h>
#include <Modloader/app/structs/MinerIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerIdle {
        inline app::MinerIdle__Class** type_info() {
            static app::MinerIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerIdle__Class* get_class() {
            return il2cpp::get_class<app::MinerIdle__Class>(type_info(), "", "MinerIdle");
        }
        inline app::MinerIdle* create() {
            return il2cpp::create_object<app::MinerIdle>(get_class());
        }
    } // namespace MinerIdle
} // namespace app::classes::types
