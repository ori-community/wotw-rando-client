#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPlayArea.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPlayArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsPlayArea {
        inline app::PetrifiedOwlFeedingGroundsPlayArea__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsPlayArea__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundsPlayArea__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsPlayArea__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsPlayArea__Class>(type_info(), "", "PetrifiedOwlFeedingGroundsPlayArea");
        }
        inline app::PetrifiedOwlFeedingGroundsPlayArea* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsPlayArea>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsPlayArea
} // namespace app::classes::types
