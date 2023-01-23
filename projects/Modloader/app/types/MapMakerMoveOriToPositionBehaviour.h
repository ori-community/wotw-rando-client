#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MapMakerMoveOriToPositionBehaviour__Class.h>
#include <Modloader/app/structs/MapMakerMoveOriToPositionBehaviour.h>

namespace app::classes::types {
    namespace MapMakerMoveOriToPositionBehaviour {
        namespace {
            inline app::MapMakerMoveOriToPositionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MapMakerMoveOriToPositionBehaviour__Class** type_info = &type_info_ref;
        inline app::MapMakerMoveOriToPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MapMakerMoveOriToPositionBehaviour__Class>(type_info, "Moon", "MapMakerMoveOriToPositionBehaviour");
        }
        inline app::MapMakerMoveOriToPositionBehaviour* create() {
            return il2cpp::create_object<app::MapMakerMoveOriToPositionBehaviour>(get_class());
        }
    } // namespace MapMakerMoveOriToPositionBehaviour
} // namespace app::classes::types
