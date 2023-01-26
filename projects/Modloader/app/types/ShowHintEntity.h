#pragma once
#include <Modloader/app/structs/ShowHintEntity.h>
#include <Modloader/app/structs/ShowHintEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowHintEntity {
        inline app::ShowHintEntity__Class** type_info() {
            static app::ShowHintEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowHintEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowHintEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowHintEntity__Class>(type_info(), "Moon.Timeline", "ShowHintEntity");
        }
        inline app::ShowHintEntity* create() {
            return il2cpp::create_object<app::ShowHintEntity>(get_class());
        }
    } // namespace ShowHintEntity
} // namespace app::classes::types
