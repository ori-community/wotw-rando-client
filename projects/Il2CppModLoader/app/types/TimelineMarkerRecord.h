#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineMarkerRecord {
        inline app::TimelineMarkerRecord__Class** type_info = (app::TimelineMarkerRecord__Class**)(modloader::win::memory::resolve_rva(0x0475DF88));
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
