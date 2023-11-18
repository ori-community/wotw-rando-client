#pragma once
#include <Modloader/app/structs/StressTesterCinematicReporter.h>
#include <Modloader/app/structs/StressTesterCinematicReporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTesterCinematicReporter {
        inline app::StressTesterCinematicReporter__Class** type_info() {
            static app::StressTesterCinematicReporter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTesterCinematicReporter__Class**)(modloader::win::memory::resolve_rva(0x0470A150));
            }
            return cache;
        }
        inline app::StressTesterCinematicReporter__Class* get_class() {
            return il2cpp::get_class<app::StressTesterCinematicReporter__Class>(type_info(), "", "StressTesterCinematicReporter");
        }
        inline app::StressTesterCinematicReporter* create() {
            return il2cpp::create_object<app::StressTesterCinematicReporter>(get_class());
        }
    } // namespace StressTesterCinematicReporter
} // namespace app::classes::types
