#pragma once
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour.h>
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballAirMoveTimelineBehaviour {
        inline app::GasballAirMoveTimelineBehaviour__Class** type_info() {
            static app::GasballAirMoveTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballAirMoveTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballAirMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballAirMoveTimelineBehaviour__Class>(type_info(), "", "GasballAirMoveTimelineBehaviour");
        }
        inline app::GasballAirMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::GasballAirMoveTimelineBehaviour>(get_class());
        }
    } // namespace GasballAirMoveTimelineBehaviour
} // namespace app::classes::types
