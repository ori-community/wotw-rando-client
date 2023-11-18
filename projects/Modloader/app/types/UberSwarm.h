#pragma once
#include <Modloader/app/structs/UberSwarm.h>
#include <Modloader/app/structs/UberSwarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarm {
        inline app::UberSwarm__Class** type_info() {
            static app::UberSwarm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarm__Class* get_class() {
            return il2cpp::get_class<app::UberSwarm__Class>(type_info(), "", "UberSwarm");
        }
        inline app::UberSwarm* create() {
            return il2cpp::create_object<app::UberSwarm>(get_class());
        }
    } // namespace UberSwarm
} // namespace app::classes::types
