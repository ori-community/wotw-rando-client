#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartTimelineOnAwake {
        namespace {
            app::StartTimelineOnAwake__Class* type_info_ref = nullptr;
        }
        app::StartTimelineOnAwake__Class** type_info = &type_info_ref;
        inline app::StartTimelineOnAwake__Class* get_class() {
            return il2cpp::get_class<app::StartTimelineOnAwake__Class>(type_info, "Moon", "StartTimelineOnAwake");
        }
        inline app::StartTimelineOnAwake* create() {
            return il2cpp::create_object<app::StartTimelineOnAwake>(get_class());
        }
    } // namespace StartTimelineOnAwake
} // namespace app::classes::types
