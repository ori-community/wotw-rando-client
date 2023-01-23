#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IIndeterminateLengthTimelineEntity__Class.h>

namespace app::classes::types {
    namespace IIndeterminateLengthTimelineEntity {
        inline app::IIndeterminateLengthTimelineEntity__Class** type_info = (app::IIndeterminateLengthTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0471CB38));
        inline app::IIndeterminateLengthTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::IIndeterminateLengthTimelineEntity__Class>(type_info, "Moon.Timeline", "IIndeterminateLengthTimelineEntity");
        }
    } // namespace IIndeterminateLengthTimelineEntity
} // namespace app::classes::types
