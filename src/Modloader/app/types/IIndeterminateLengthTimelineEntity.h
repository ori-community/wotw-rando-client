#pragma once
#include <Modloader/app/structs/IIndeterminateLengthTimelineEntity.h>
#include <Modloader/app/structs/IIndeterminateLengthTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IIndeterminateLengthTimelineEntity {
        inline app::IIndeterminateLengthTimelineEntity__Class** type_info() {
            static app::IIndeterminateLengthTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IIndeterminateLengthTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0471CB38));
            }
            return cache;
        }
        inline app::IIndeterminateLengthTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::IIndeterminateLengthTimelineEntity__Class>(type_info(), "Moon.Timeline", "IIndeterminateLengthTimelineEntity");
        }
    } // namespace IIndeterminateLengthTimelineEntity
} // namespace app::classes::types
