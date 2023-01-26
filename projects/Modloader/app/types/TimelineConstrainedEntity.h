#pragma once
#include <Modloader/app/structs/TimelineConstrainedEntity.h>
#include <Modloader/app/structs/TimelineConstrainedEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineConstrainedEntity {
        inline app::TimelineConstrainedEntity__Class** type_info() {
            static app::TimelineConstrainedEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x047706B0));
            }
            return cache;
        }
        inline app::TimelineConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstrainedEntity__Class>(type_info(), "Moon.Timeline", "TimelineConstrainedEntity");
        }
        inline app::TimelineConstrainedEntity* create() {
            return il2cpp::create_object<app::TimelineConstrainedEntity>(get_class());
        }
    } // namespace TimelineConstrainedEntity
} // namespace app::classes::types
