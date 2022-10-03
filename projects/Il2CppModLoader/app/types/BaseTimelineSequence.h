#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseTimelineSequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseTimelineSequence__Class** type_info;
        inline app::BaseTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::BaseTimelineSequence__Class>(type_info, "", "BaseTimelineSequence");
        }
        inline app::BaseTimelineSequence* create() {
            return il2cpp::create_object<app::BaseTimelineSequence>(get_class());
        }
    } // namespace BaseTimelineSequence
} // namespace app::classes::types
