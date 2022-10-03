#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineSequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MasterTimelineSequence__Class** type_info;
        inline app::MasterTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineSequence__Class>(type_info, "", "MasterTimelineSequence");
        }
        inline app::MasterTimelineSequence* create() {
            return il2cpp::create_object<app::MasterTimelineSequence>(get_class());
        }
    } // namespace MasterTimelineSequence
} // namespace app::classes::types
