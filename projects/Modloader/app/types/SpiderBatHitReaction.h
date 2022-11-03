#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatHitReaction {
        namespace {
            inline app::SpiderBatHitReaction__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatHitReaction__Class** type_info = &type_info_ref;
        inline app::SpiderBatHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatHitReaction__Class>(type_info, "", "SpiderBatHitReaction");
        }
        inline app::SpiderBatHitReaction* create() {
            return il2cpp::create_object<app::SpiderBatHitReaction>(get_class());
        }
    } // namespace SpiderBatHitReaction
} // namespace app::classes::types
