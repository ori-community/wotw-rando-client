#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineBehaviour.h>

namespace app::classes::types {
    namespace SpiderBossLocationTimelineBehaviour {
        namespace {
            inline app::SpiderBossLocationTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationTimelineBehaviour__Class>(type_info, "", "SpiderBossLocationTimelineBehaviour");
        }
        inline app::SpiderBossLocationTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocationTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossLocationTimelineBehaviour
} // namespace app::classes::types
