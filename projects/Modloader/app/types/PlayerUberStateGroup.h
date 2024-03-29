#pragma once
#include <Modloader/app/structs/PlayerUberStateGroup.h>
#include <Modloader/app/structs/PlayerUberStateGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateGroup {
        inline app::PlayerUberStateGroup__Class** type_info() {
            static app::PlayerUberStateGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0475D8E0));
            }
            return cache;
        }
        inline app::PlayerUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateGroup__Class>(type_info(), "", "PlayerUberStateGroup");
        }
        inline app::PlayerUberStateGroup* create() {
            return il2cpp::create_object<app::PlayerUberStateGroup>(get_class());
        }
    } // namespace PlayerUberStateGroup
} // namespace app::classes::types
