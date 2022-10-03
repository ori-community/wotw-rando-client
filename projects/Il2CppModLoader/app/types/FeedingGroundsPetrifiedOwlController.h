#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FeedingGroundsPetrifiedOwlController__Class** type_info;
        inline app::FeedingGroundsPetrifiedOwlController__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsPetrifiedOwlController__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController");
        }
        inline app::FeedingGroundsPetrifiedOwlController* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController
} // namespace app::classes::types
