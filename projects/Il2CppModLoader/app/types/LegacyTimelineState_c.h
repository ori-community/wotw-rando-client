#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineState_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineState_c__Class** type_info;
        inline app::LegacyTimelineState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineState_c__Class>(type_info, "Moon.Timeline", "LegacyTimelineState", "<>c");
        }
        inline app::LegacyTimelineState_c* create() {
            return il2cpp::create_object<app::LegacyTimelineState_c>(get_class());
        }
    } // namespace LegacyTimelineState_c
} // namespace app::classes::types
