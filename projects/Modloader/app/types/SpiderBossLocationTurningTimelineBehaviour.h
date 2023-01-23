#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocationTurningTimelineBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBossLocationTurningTimelineBehaviour.h>

namespace app::classes::types {
    namespace SpiderBossLocationTurningTimelineBehaviour {
        namespace {
            inline app::SpiderBossLocationTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTurningTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTurningTimelineBehaviour");
        }
        inline app::SpiderBossLocationTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTurningTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTurningTimelineBehaviour
} // namespace app::classes::types
