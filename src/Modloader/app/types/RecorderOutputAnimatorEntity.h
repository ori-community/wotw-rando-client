#pragma once
#include <Modloader/app/structs/RecorderOutputAnimatorEntity.h>
#include <Modloader/app/structs/RecorderOutputAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderOutputAnimatorEntity {
        inline app::RecorderOutputAnimatorEntity__Class** type_info() {
            static app::RecorderOutputAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderOutputAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04748E08));
            }
            return cache;
        }
        inline app::RecorderOutputAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RecorderOutputAnimatorEntity__Class>(type_info(), "Moon.Timeline", "RecorderOutputAnimatorEntity");
        }
        inline app::RecorderOutputAnimatorEntity* create() {
            return il2cpp::create_object<app::RecorderOutputAnimatorEntity>(get_class());
        }
    } // namespace RecorderOutputAnimatorEntity
} // namespace app::classes::types
