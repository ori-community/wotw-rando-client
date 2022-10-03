#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineSequence_c__Class** type_info;
        inline app::LegacyTimelineSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_c__Class>(type_info, "", "LegacyTimelineSequence", "<>c");
        }
        inline app::LegacyTimelineSequence_c* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_c>(get_class());
        }
    } // namespace LegacyTimelineSequence_c
} // namespace app::classes::types
