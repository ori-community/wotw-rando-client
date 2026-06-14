#pragma once
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour.h>
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoMoveToSemiRandomPositionBehaviour {
        inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class** type_info() {
            static app::SkeetoMoveToSemiRandomPositionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoMoveToSemiRandomPositionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoMoveToSemiRandomPositionBehaviour__Class>(type_info(), "", "SkeetoMoveToSemiRandomPositionBehaviour");
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoMoveToSemiRandomPositionBehaviour>(get_class());
        }
    } // namespace SkeetoMoveToSemiRandomPositionBehaviour
} // namespace app::classes::types
