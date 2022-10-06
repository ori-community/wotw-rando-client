#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineMarkerRecord {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineMarkerRecord__Class** type_info;
        inline app::TimelineMarkerRecord__Class* get_class() {
            return il2cpp::get_class<app::TimelineMarkerRecord__Class>(type_info, "Moon.Timeline", "TimelineMarkerRecord");
        }
        inline app::TimelineMarkerRecord* create() {
            return il2cpp::create_object<app::TimelineMarkerRecord>(get_class());
        }
        inline app::TimelineMarkerRecord__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineMarkerRecord__Array>(get_class(), size);
        }
        inline app::TimelineMarkerRecord__Array* create_array(const std::vector<app::TimelineMarkerRecord*>& items) {
            return il2cpp::array_new<app::TimelineMarkerRecord__Array>(get_class(), items);
        }
    } // namespace TimelineMarkerRecord
} // namespace app::classes::types
