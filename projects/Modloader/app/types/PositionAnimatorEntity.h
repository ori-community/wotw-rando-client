#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PositionAnimatorEntity__Class.h>
#include <Modloader/app/structs/PositionAnimatorEntity.h>

namespace app::classes::types {
    namespace PositionAnimatorEntity {
        inline app::PositionAnimatorEntity__Class** type_info = (app::PositionAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04745768));
        inline app::PositionAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::PositionAnimatorEntity__Class>(type_info, "Moon.Timeline", "PositionAnimatorEntity");
        }
        inline app::PositionAnimatorEntity* create() {
            return il2cpp::create_object<app::PositionAnimatorEntity>(get_class());
        }
    } // namespace PositionAnimatorEntity
} // namespace app::classes::types
