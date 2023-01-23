#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RockyEnemySpiritLeashedState__Class.h>
#include <Modloader/app/structs/RockyEnemySpiritLeashedState.h>

namespace app::classes::types {
    namespace RockyEnemySpiritLeashedState {
        namespace {
            inline app::RockyEnemySpiritLeashedState__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemySpiritLeashedState__Class** type_info = &type_info_ref;
        inline app::RockyEnemySpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemySpiritLeashedState__Class>(type_info, "", "RockyEnemySpiritLeashedState");
        }
        inline app::RockyEnemySpiritLeashedState* create() {
            return il2cpp::create_object<app::RockyEnemySpiritLeashedState>(get_class());
        }
    } // namespace RockyEnemySpiritLeashedState
} // namespace app::classes::types
