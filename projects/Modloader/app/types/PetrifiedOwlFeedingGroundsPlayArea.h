#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPlayArea__Class.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPlayArea.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsPlayArea {
        namespace {
            inline app::PetrifiedOwlFeedingGroundsPlayArea__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlFeedingGroundsPlayArea__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundsPlayArea__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsPlayArea__Class>(type_info, "", "PetrifiedOwlFeedingGroundsPlayArea");
        }
        inline app::PetrifiedOwlFeedingGroundsPlayArea* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsPlayArea>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsPlayArea
} // namespace app::classes::types
