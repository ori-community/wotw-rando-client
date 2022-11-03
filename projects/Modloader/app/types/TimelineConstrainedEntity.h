#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineConstrainedEntity {
        inline app::TimelineConstrainedEntity__Class** type_info = (app::TimelineConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x047706B0));
        inline app::TimelineConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstrainedEntity__Class>(type_info, "Moon.Timeline", "TimelineConstrainedEntity");
        }
        inline app::TimelineConstrainedEntity* create() {
            return il2cpp::create_object<app::TimelineConstrainedEntity>(get_class());
        }
    } // namespace TimelineConstrainedEntity
} // namespace app::classes::types
