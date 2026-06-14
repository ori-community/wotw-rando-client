#pragma once
#include <Modloader/app/structs/FeedingGroundsBreakableOwl.h>
#include <Modloader/app/structs/FeedingGroundsBreakableOwl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsBreakableOwl {
        inline app::FeedingGroundsBreakableOwl__Class** type_info() {
            static app::FeedingGroundsBreakableOwl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsBreakableOwl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsBreakableOwl__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsBreakableOwl__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsBreakableOwl");
        }
        inline app::FeedingGroundsBreakableOwl* create() {
            return il2cpp::create_object<app::FeedingGroundsBreakableOwl>(get_class());
        }
    } // namespace FeedingGroundsBreakableOwl
} // namespace app::classes::types
