#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsBreakablePlatform {
        namespace {
            inline app::FeedingGroundsBreakablePlatform__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsBreakablePlatform__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsBreakablePlatform__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsBreakablePlatform__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsBreakablePlatform");
        }
        inline app::FeedingGroundsBreakablePlatform* create() {
            return il2cpp::create_object<app::FeedingGroundsBreakablePlatform>(get_class());
        }
    } // namespace FeedingGroundsBreakablePlatform
} // namespace app::classes::types
