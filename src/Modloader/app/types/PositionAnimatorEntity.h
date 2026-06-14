#pragma once
#include <Modloader/app/structs/PositionAnimatorEntity.h>
#include <Modloader/app/structs/PositionAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionAnimatorEntity {
        inline app::PositionAnimatorEntity__Class** type_info() {
            static app::PositionAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PositionAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04745768));
            }
            return cache;
        }
        inline app::PositionAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::PositionAnimatorEntity__Class>(type_info(), "Moon.Timeline", "PositionAnimatorEntity");
        }
        inline app::PositionAnimatorEntity* create() {
            return il2cpp::create_object<app::PositionAnimatorEntity>(get_class());
        }
    } // namespace PositionAnimatorEntity
} // namespace app::classes::types
