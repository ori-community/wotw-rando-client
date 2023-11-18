#pragma once
#include <Modloader/app/structs/SnapTrapEntity.h>
#include <Modloader/app/structs/SnapTrapEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapEntity {
        inline app::SnapTrapEntity__Class** type_info() {
            static app::SnapTrapEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapEntity__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapEntity__Class>(type_info(), "", "SnapTrapEntity");
        }
        inline app::SnapTrapEntity* create() {
            return il2cpp::create_object<app::SnapTrapEntity>(get_class());
        }
    } // namespace SnapTrapEntity
} // namespace app::classes::types
