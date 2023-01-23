#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Array__Class.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Array.h>

namespace app::classes::types {
    namespace FeedingGroundsHideZone__Array {
        namespace {
            inline app::FeedingGroundsHideZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsHideZone__Array__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsHideZone__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsHideZone[]");
        }
        inline app::FeedingGroundsHideZone__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsHideZone__Array>(get_class());
        }
    } // namespace FeedingGroundsHideZone__Array
} // namespace app::classes::types
