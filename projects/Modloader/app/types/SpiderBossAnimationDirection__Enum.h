#pragma once
#include <Modloader/app/structs/SpiderBossAnimationDirection__Enum.h>
#include <Modloader/app/structs/SpiderBossAnimationDirection__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAnimationDirection__Enum {
        inline app::SpiderBossAnimationDirection__Enum__Class** type_info() {
            static app::SpiderBossAnimationDirection__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossAnimationDirection__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704B38));
            }
            return cache;
        }
        inline app::SpiderBossAnimationDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAnimationDirection__Enum__Class>(type_info(), "", "SpiderBossAnimationDirection");
        }
        inline app::SpiderBossAnimationDirection__Enum* create() {
            return il2cpp::create_object<app::SpiderBossAnimationDirection__Enum>(get_class());
        }
    } // namespace SpiderBossAnimationDirection__Enum
} // namespace app::classes::types
