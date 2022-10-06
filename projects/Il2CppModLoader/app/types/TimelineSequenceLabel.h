#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineSequenceLabel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineSequenceLabel__Class** type_info;
        inline app::TimelineSequenceLabel__Class* get_class() {
            return il2cpp::get_class<app::TimelineSequenceLabel__Class>(type_info, "", "TimelineSequenceLabel");
        }
        inline app::TimelineSequenceLabel* create() {
            return il2cpp::create_object<app::TimelineSequenceLabel>(get_class());
        }
        inline app::TimelineSequenceLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineSequenceLabel__Array>(get_class(), size);
        }
        inline app::TimelineSequenceLabel__Array* create_array(const std::vector<app::TimelineSequenceLabel*>& items) {
            return il2cpp::array_new<app::TimelineSequenceLabel__Array>(get_class(), items);
        }
    } // namespace TimelineSequenceLabel
} // namespace app::classes::types
