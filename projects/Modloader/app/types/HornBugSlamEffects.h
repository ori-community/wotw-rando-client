#pragma once
#include <Modloader/app/structs/HornBugSlamEffects.h>
#include <Modloader/app/structs/HornBugSlamEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugSlamEffects {
        inline app::HornBugSlamEffects__Class** type_info() {
            static app::HornBugSlamEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HornBugSlamEffects__Class**)(modloader::win::memory::resolve_rva(0x0471AB88));
            }
            return cache;
        }
        inline app::HornBugSlamEffects__Class* get_class() {
            return il2cpp::get_class<app::HornBugSlamEffects__Class>(type_info(), "", "HornBugSlamEffects");
        }
        inline app::HornBugSlamEffects* create() {
            return il2cpp::create_object<app::HornBugSlamEffects>(get_class());
        }
    } // namespace HornBugSlamEffects
} // namespace app::classes::types
