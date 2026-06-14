#pragma once
#include <Modloader/app/structs/MatchJointsJob.h>
#include <Modloader/app/structs/MatchJointsJob__Boxed.h>
#include <Modloader/app/structs/MatchJointsJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchJointsJob {
        inline app::MatchJointsJob__Class** type_info() {
            static app::MatchJointsJob__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchJointsJob__Class**)(modloader::win::memory::resolve_rva(0x04776E40));
            }
            return cache;
        }
        inline app::MatchJointsJob__Class* get_class() {
            return il2cpp::get_class<app::MatchJointsJob__Class>(type_info(), "Moon.Animation", "MatchJointsJob");
        }
        inline app::MatchJointsJob* create() {
            return il2cpp::create_object<app::MatchJointsJob>(get_class());
        }
        inline app::MatchJointsJob__Boxed* box(app::MatchJointsJob value) {
            return il2cpp::box_value<app::MatchJointsJob__Boxed>(get_class(), value);
        }
    } // namespace MatchJointsJob
} // namespace app::classes::types
