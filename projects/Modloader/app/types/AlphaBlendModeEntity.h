#pragma once
#include <Modloader/app/structs/AlphaBlendModeEntity.h>
#include <Modloader/app/structs/AlphaBlendModeEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlphaBlendModeEntity {
        inline app::AlphaBlendModeEntity__Class** type_info() {
            static app::AlphaBlendModeEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlphaBlendModeEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlphaBlendModeEntity__Class* get_class() {
            return il2cpp::get_class<app::AlphaBlendModeEntity__Class>(type_info(), "Moon.Timeline", "AlphaBlendModeEntity");
        }
        inline app::AlphaBlendModeEntity* create() {
            return il2cpp::create_object<app::AlphaBlendModeEntity>(get_class());
        }
    } // namespace AlphaBlendModeEntity
} // namespace app::classes::types
