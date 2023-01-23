#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstrainPlayerMovementZone__Class.h>
#include <Modloader/app/structs/ConstrainPlayerMovementZone.h>

namespace app::classes::types {
    namespace ConstrainPlayerMovementZone {
        namespace {
            inline app::ConstrainPlayerMovementZone__Class* type_info_ref = nullptr;
        }
        inline app::ConstrainPlayerMovementZone__Class** type_info = &type_info_ref;
        inline app::ConstrainPlayerMovementZone__Class* get_class() {
            return il2cpp::get_class<app::ConstrainPlayerMovementZone__Class>(type_info, "", "ConstrainPlayerMovementZone");
        }
        inline app::ConstrainPlayerMovementZone* create() {
            return il2cpp::create_object<app::ConstrainPlayerMovementZone>(get_class());
        }
    } // namespace ConstrainPlayerMovementZone
} // namespace app::classes::types
