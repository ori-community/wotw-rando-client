#pragma once
#include <Modloader/app/structs/MinerSpawnType__Enum.h>
#include <Modloader/app/structs/MinerSpawnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnType__Enum {
        inline app::MinerSpawnType__Enum__Class** type_info() {
            static app::MinerSpawnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerSpawnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnType__Enum__Class>(type_info(), "", "MinerSpawnType");
        }
        inline app::MinerSpawnType__Enum* create() {
            return il2cpp::create_object<app::MinerSpawnType__Enum>(get_class());
        }
    } // namespace MinerSpawnType__Enum
} // namespace app::classes::types
