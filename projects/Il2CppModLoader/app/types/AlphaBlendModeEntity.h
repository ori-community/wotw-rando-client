#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlphaBlendModeEntity {
        namespace {
            app::AlphaBlendModeEntity__Class* type_info_ref = nullptr;
        }
        app::AlphaBlendModeEntity__Class** type_info = &type_info_ref;
        inline app::AlphaBlendModeEntity__Class* get_class() {
            return il2cpp::get_class<app::AlphaBlendModeEntity__Class>(type_info, "Moon.Timeline", "AlphaBlendModeEntity");
        }
        inline app::AlphaBlendModeEntity* create() {
            return il2cpp::create_object<app::AlphaBlendModeEntity>(get_class());
        }
    } // namespace AlphaBlendModeEntity
} // namespace app::classes::types
