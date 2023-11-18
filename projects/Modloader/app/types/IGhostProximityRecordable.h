#pragma once
#include <Modloader/app/structs/IGhostProximityRecordable.h>
#include <Modloader/app/structs/IGhostProximityRecordable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGhostProximityRecordable {
        inline app::IGhostProximityRecordable__Class** type_info() {
            static app::IGhostProximityRecordable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGhostProximityRecordable__Class**)(modloader::win::memory::resolve_rva(0x047021E0));
            }
            return cache;
        }
        inline app::IGhostProximityRecordable__Class* get_class() {
            return il2cpp::get_class<app::IGhostProximityRecordable__Class>(type_info(), "", "IGhostProximityRecordable");
        }
    } // namespace IGhostProximityRecordable
} // namespace app::classes::types
