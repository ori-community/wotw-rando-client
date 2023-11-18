#pragma once
#include <Modloader/app/structs/ITimelineWithExternalTimelineEntity.h>
#include <Modloader/app/structs/ITimelineWithExternalTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineWithExternalTimelineEntity {
        inline app::ITimelineWithExternalTimelineEntity__Class** type_info() {
            static app::ITimelineWithExternalTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineWithExternalTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0476AD00));
            }
            return cache;
        }
        inline app::ITimelineWithExternalTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::ITimelineWithExternalTimelineEntity__Class>(type_info(), "Moon.Timeline", "ITimelineWithExternalTimelineEntity");
        }
    } // namespace ITimelineWithExternalTimelineEntity
} // namespace app::classes::types
