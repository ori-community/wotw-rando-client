#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence_SequenceEntry_Constraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineSequence_SequenceEntry_Constraint__Class** type_info;
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTimelineSequence_SequenceEntry_Constraint__Class>(type_info, "", "LegacyTimelineSequence+SequenceEntry", "Constraint");
        }
        inline app::LegacyTimelineSequence_SequenceEntry_Constraint* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence_SequenceEntry_Constraint>(get_class());
        }
    } // namespace LegacyTimelineSequence_SequenceEntry_Constraint
} // namespace app::classes::types
