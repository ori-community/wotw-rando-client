#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsZoneChecker__Array {
        namespace {
            inline app::FeedingGroundsZoneChecker__Array__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsZoneChecker__Array__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsZoneChecker__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsZoneChecker__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsZoneChecker[]");
        }
        inline app::FeedingGroundsZoneChecker__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsZoneChecker__Array>(get_class());
        }
    } // namespace FeedingGroundsZoneChecker__Array
} // namespace app::classes::types
