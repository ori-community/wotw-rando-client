#pragma once
#include <Modloader/app/structs/RaceRestoreCheckpointState_c.h>
#include <Modloader/app/structs/RaceRestoreCheckpointState_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceRestoreCheckpointState_c {
        inline app::RaceRestoreCheckpointState_c__Class** type_info() {
            static app::RaceRestoreCheckpointState_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceRestoreCheckpointState_c__Class**)(modloader::win::memory::resolve_rva(0x04791A88));
            }
            return cache;
        }
        inline app::RaceRestoreCheckpointState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceRestoreCheckpointState_c__Class>(type_info(), "", "RaceRestoreCheckpointState", "<>c");
        }
        inline app::RaceRestoreCheckpointState_c* create() {
            return il2cpp::create_object<app::RaceRestoreCheckpointState_c>(get_class());
        }
    } // namespace RaceRestoreCheckpointState_c
} // namespace app::classes::types
