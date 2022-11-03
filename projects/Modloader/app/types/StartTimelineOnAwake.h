#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StartTimelineOnAwake {
        namespace {
            inline app::StartTimelineOnAwake__Class* type_info_ref = nullptr;
        }
        inline app::StartTimelineOnAwake__Class** type_info = &type_info_ref;
        inline app::StartTimelineOnAwake__Class* get_class() {
            return il2cpp::get_class<app::StartTimelineOnAwake__Class>(type_info, "Moon", "StartTimelineOnAwake");
        }
        inline app::StartTimelineOnAwake* create() {
            return il2cpp::create_object<app::StartTimelineOnAwake>(get_class());
        }
    } // namespace StartTimelineOnAwake
} // namespace app::classes::types
