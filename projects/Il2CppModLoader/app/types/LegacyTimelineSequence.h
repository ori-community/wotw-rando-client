#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyTimelineSequence__Class** type_info;
        inline app::LegacyTimelineSequence__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineSequence__Class>(type_info, "", "LegacyTimelineSequence");
        }
        inline app::LegacyTimelineSequence* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence>(get_class());
        }
        inline app::LegacyTimelineSequence__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTimelineSequence__Array>(get_class(), size);
        }
        inline app::LegacyTimelineSequence__Array* create_array(const std::vector<app::LegacyTimelineSequence*>& items) {
            return il2cpp::array_new<app::LegacyTimelineSequence__Array>(get_class(), items);
        }
    } // namespace LegacyTimelineSequence
} // namespace app::classes::types
