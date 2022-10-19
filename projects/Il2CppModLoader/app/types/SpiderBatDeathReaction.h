#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
