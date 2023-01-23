#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BossRaceHandler__Class.h>
#include <Modloader/app/structs/BossRaceHandler.h>

namespace app::classes::types {
    namespace BossRaceHandler {
        namespace {
            inline app::BossRaceHandler__Class* type_info_ref = nullptr;
        }
        inline app::BossRaceHandler__Class** type_info = &type_info_ref;
        inline app::BossRaceHandler__Class* get_class() {
            return il2cpp::get_class<app::BossRaceHandler__Class>(type_info, "", "BossRaceHandler");
        }
        inline app::BossRaceHandler* create() {
            return il2cpp::create_object<app::BossRaceHandler>(get_class());
        }
    } // namespace BossRaceHandler
} // namespace app::classes::types
