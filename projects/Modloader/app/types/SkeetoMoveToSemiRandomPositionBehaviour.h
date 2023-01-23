#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour__Class.h>
#include <Modloader/app/structs/SkeetoMoveToSemiRandomPositionBehaviour.h>

namespace app::classes::types {
    namespace SkeetoMoveToSemiRandomPositionBehaviour {
        namespace {
            inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoMoveToSemiRandomPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoMoveToSemiRandomPositionBehaviour__Class>(type_info, "", "SkeetoMoveToSemiRandomPositionBehaviour");
        }
        inline app::SkeetoMoveToSemiRandomPositionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoMoveToSemiRandomPositionBehaviour>(get_class());
        }
    } // namespace SkeetoMoveToSemiRandomPositionBehaviour
} // namespace app::classes::types
