#pragma once
#include <Modloader/app/structs/OriHeadIkEntity.h>
#include <Modloader/app/structs/OriHeadIkEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriHeadIkEntity {
        inline app::OriHeadIkEntity__Class** type_info() {
            static app::OriHeadIkEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriHeadIkEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriHeadIkEntity__Class* get_class() {
            return il2cpp::get_class<app::OriHeadIkEntity__Class>(type_info(), "Moon.Timeline", "OriHeadIkEntity");
        }
        inline app::OriHeadIkEntity* create() {
            return il2cpp::create_object<app::OriHeadIkEntity>(get_class());
        }
    } // namespace OriHeadIkEntity
} // namespace app::classes::types
