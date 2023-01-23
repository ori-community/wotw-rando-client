#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace SpiderBossDeathReactionBehaviour {
        namespace {
            inline app::SpiderBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDeathReactionBehaviour__Class>(type_info, "", "SpiderBossDeathReactionBehaviour");
        }
        inline app::SpiderBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossDeathReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossDeathReactionBehaviour
} // namespace app::classes::types
