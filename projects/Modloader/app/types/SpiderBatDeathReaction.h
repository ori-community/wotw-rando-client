#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatDeathReaction__Class.h>
#include <Modloader/app/structs/SpiderBatDeathReaction.h>

namespace app::classes::types {
    namespace SpiderBatDeathReaction {
        namespace {
            inline app::SpiderBatDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatDeathReaction__Class** type_info = &type_info_ref;
        inline app::SpiderBatDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatDeathReaction__Class>(type_info, "", "SpiderBatDeathReaction");
        }
        inline app::SpiderBatDeathReaction* create() {
            return il2cpp::create_object<app::SpiderBatDeathReaction>(get_class());
        }
    } // namespace SpiderBatDeathReaction
} // namespace app::classes::types
