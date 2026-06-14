#pragma once
#include <Modloader/app/structs/PlayerConnectionInternal.h>
#include <Modloader/app/structs/PlayerConnectionInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerConnectionInternal {
        inline app::PlayerConnectionInternal__Class** type_info() {
            static app::PlayerConnectionInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerConnectionInternal__Class**)(modloader::win::memory::resolve_rva(0x047981B0));
            }
            return cache;
        }
        inline app::PlayerConnectionInternal__Class* get_class() {
            return il2cpp::get_class<app::PlayerConnectionInternal__Class>(type_info(), "UnityEngine", "PlayerConnectionInternal");
        }
        inline app::PlayerConnectionInternal* create() {
            return il2cpp::create_object<app::PlayerConnectionInternal>(get_class());
        }
    } // namespace PlayerConnectionInternal
} // namespace app::classes::types
