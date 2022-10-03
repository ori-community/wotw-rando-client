#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineState__Class** type_info;
        inline app::LegacyTimelineState__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineState__Class>(type_info, "Moon.Timeline", "LegacyTimelineState");
        }
        inline app::LegacyTimelineState* create() {
            return il2cpp::create_object<app::LegacyTimelineState>(get_class());
        }
    } // namespace LegacyTimelineState
} // namespace app::classes::types
