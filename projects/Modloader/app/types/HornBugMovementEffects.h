#pragma once
#include <Modloader/app/structs/HornBugMovementEffects.h>
#include <Modloader/app/structs/HornBugMovementEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugMovementEffects {
        inline app::HornBugMovementEffects__Class** type_info() {
            static app::HornBugMovementEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HornBugMovementEffects__Class**)(modloader::win::memory::resolve_rva(0x0471C498));
            }
            return cache;
        }
        inline app::HornBugMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::HornBugMovementEffects__Class>(type_info(), "", "HornBugMovementEffects");
        }
        inline app::HornBugMovementEffects* create() {
            return il2cpp::create_object<app::HornBugMovementEffects>(get_class());
        }
    } // namespace HornBugMovementEffects
} // namespace app::classes::types
