#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugBossTimelineBehaviour__Class.h>
#include <Modloader/app/structs/HornBugBossTimelineBehaviour.h>

namespace app::classes::types {
    namespace HornBugBossTimelineBehaviour {
        namespace {
            inline app::HornBugBossTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugBossTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugBossTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugBossTimelineBehaviour__Class>(type_info, "", "HornBugBossTimelineBehaviour");
        }
        inline app::HornBugBossTimelineBehaviour* create() {
            return il2cpp::create_object<app::HornBugBossTimelineBehaviour>(get_class());
        }
    } // namespace HornBugBossTimelineBehaviour
} // namespace app::classes::types
