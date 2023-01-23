#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerDamagedBehavior__Class.h>
#include <Modloader/app/structs/MinerDamagedBehavior.h>

namespace app::classes::types {
    namespace MinerDamagedBehavior {
        namespace {
            inline app::MinerDamagedBehavior__Class* type_info_ref = nullptr;
        }
        inline app::MinerDamagedBehavior__Class** type_info = &type_info_ref;
        inline app::MinerDamagedBehavior__Class* get_class() {
            return il2cpp::get_class<app::MinerDamagedBehavior__Class>(type_info, "", "MinerDamagedBehavior");
        }
        inline app::MinerDamagedBehavior* create() {
            return il2cpp::create_object<app::MinerDamagedBehavior>(get_class());
        }
    } // namespace MinerDamagedBehavior
} // namespace app::classes::types
