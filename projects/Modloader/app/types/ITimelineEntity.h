#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITimelineEntity {
        inline app::ITimelineEntity__Class** type_info = (app::ITimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0476FF20));
        inline app::ITimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEntity__Class>(type_info, "Moon.Timeline", "ITimelineEntity");
        }
        inline app::ITimelineEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ITimelineEntity__Array>(get_class(), size);
        }
        inline app::ITimelineEntity__Array* create_array(const std::vector<app::ITimelineEntity*>& items) {
            return il2cpp::array_new<app::ITimelineEntity__Array>(get_class(), items);
        }
    } // namespace ITimelineEntity
} // namespace app::classes::types
