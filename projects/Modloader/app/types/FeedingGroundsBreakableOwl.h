#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsBreakableOwl {
        namespace {
            inline app::FeedingGroundsBreakableOwl__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsBreakableOwl__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsBreakableOwl__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsBreakableOwl__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsBreakableOwl");
        }
        inline app::FeedingGroundsBreakableOwl* create() {
            return il2cpp::create_object<app::FeedingGroundsBreakableOwl>(get_class());
        }
    } // namespace FeedingGroundsBreakableOwl
} // namespace app::classes::types
