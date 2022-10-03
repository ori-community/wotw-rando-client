#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAnimationDirection__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossAnimationDirection__Enum__Class** type_info;
        inline app::SpiderBossAnimationDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAnimationDirection__Enum__Class>(type_info, "", "SpiderBossAnimationDirection");
        }
        inline app::SpiderBossAnimationDirection__Enum* create() {
            return il2cpp::create_object<app::SpiderBossAnimationDirection__Enum>(get_class());
        }
    } // namespace SpiderBossAnimationDirection__Enum
} // namespace app::classes::types
