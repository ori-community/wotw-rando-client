#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour__Class.h>
#include <Modloader/app/structs/HornBugBossDeathBehaviour.h>

namespace app::classes::types {
    namespace HornBugBossDeathBehaviour {
        namespace {
            inline app::HornBugBossDeathBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugBossDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossDeathBehaviour__Class>(type_info, "", "HornBugBossDeathBehaviour");
        }
        inline app::HornBugBossDeathBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossDeathBehaviour>(get_class());
        }
    } // namespace HornBugBossDeathBehaviour
} // namespace app::classes::types
