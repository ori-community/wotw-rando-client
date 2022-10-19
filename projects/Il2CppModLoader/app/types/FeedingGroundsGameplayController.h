#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsGameplayController {
        namespace {
            inline app::FeedingGroundsGameplayController__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsGameplayController__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsGameplayController__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsGameplayController__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsGameplayController");
        }
        inline app::FeedingGroundsGameplayController* create() {
            return il2cpp::create_object<app::FeedingGroundsGameplayController>(get_class());
        }
    } // namespace FeedingGroundsGameplayController
} // namespace app::classes::types
