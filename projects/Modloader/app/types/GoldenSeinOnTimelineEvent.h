#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GoldenSeinOnTimelineEvent__Class.h>
#include <Modloader/app/structs/GoldenSeinOnTimelineEvent.h>

namespace app::classes::types {
    namespace GoldenSeinOnTimelineEvent {
        namespace {
            inline app::GoldenSeinOnTimelineEvent__Class* type_info_ref = nullptr;
        }
        inline app::GoldenSeinOnTimelineEvent__Class** type_info = &type_info_ref;
        inline app::GoldenSeinOnTimelineEvent__Class* get_class() {
            return il2cpp::get_class<app::GoldenSeinOnTimelineEvent__Class>(type_info, "", "GoldenSeinOnTimelineEvent");
        }
        inline app::GoldenSeinOnTimelineEvent* create() {
            return il2cpp::create_object<app::GoldenSeinOnTimelineEvent>(get_class());
        }
    } // namespace GoldenSeinOnTimelineEvent
} // namespace app::classes::types
