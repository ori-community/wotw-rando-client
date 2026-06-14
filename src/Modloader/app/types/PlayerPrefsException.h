#pragma once
#include <Modloader/app/structs/PlayerPrefsException.h>
#include <Modloader/app/structs/PlayerPrefsException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPrefsException {
        inline app::PlayerPrefsException__Class** type_info() {
            static app::PlayerPrefsException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerPrefsException__Class**)(modloader::win::memory::resolve_rva(0x04738940));
            }
            return cache;
        }
        inline app::PlayerPrefsException__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefsException__Class>(type_info(), "UnityEngine", "PlayerPrefsException");
        }
        inline app::PlayerPrefsException* create() {
            return il2cpp::create_object<app::PlayerPrefsException>(get_class());
        }
    } // namespace PlayerPrefsException
} // namespace app::classes::types
