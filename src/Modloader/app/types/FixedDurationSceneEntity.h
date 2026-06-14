#pragma once
#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#include <Modloader/app/structs/FixedDurationSceneEntity__Array.h>
#include <Modloader/app/structs/FixedDurationSceneEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity {
        inline app::FixedDurationSceneEntity__Class** type_info() {
            static app::FixedDurationSceneEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixedDurationSceneEntity__Class**)(modloader::win::memory::resolve_rva(0x047038C0));
            }
            return cache;
        }
        inline app::FixedDurationSceneEntity__Class* get_class() {
            return il2cpp::get_class<app::FixedDurationSceneEntity__Class>(type_info(), "Moon.Timeline", "FixedDurationSceneEntity");
        }
        inline app::FixedDurationSceneEntity* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity>(get_class());
        }
        inline app::FixedDurationSceneEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::FixedDurationSceneEntity__Array>(get_class(), size);
        }
        inline app::FixedDurationSceneEntity__Array* create_array(const std::vector<app::FixedDurationSceneEntity*>& items) {
            return il2cpp::array_new<app::FixedDurationSceneEntity__Array>(get_class(), items);
        }
    } // namespace FixedDurationSceneEntity
} // namespace app::classes::types
