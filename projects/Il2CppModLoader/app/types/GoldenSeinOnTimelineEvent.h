#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoldenSeinOnTimelineEvent {
        namespace {
            app::GoldenSeinOnTimelineEvent__Class* type_info_ref = nullptr;
        }
        app::GoldenSeinOnTimelineEvent__Class** type_info = &type_info_ref;
        inline app::GoldenSeinOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinOnTimelineEvent__Class>(type_info, "", "GoldenSeinOnTimelineEvent");
        }
        inline app::GoldenSeinOnTimelineEvent* create() {
            return il2cpp::create_object<app::GoldenSeinOnTimelineEvent>(get_class());
        }
    } // namespace GoldenSeinOnTimelineEvent
} // namespace app::classes::types
