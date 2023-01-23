#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurnTimelineBehaviour {
        namespace {
            inline app::SpiderBossLocationTurnTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationTurnTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTurnTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurnTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTurnTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurnTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurnTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurnTimelineBehaviour
} // namespace app::classes::types
