#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerPrefsException {
        inline app::PlayerPrefsException__Class** type_info = (app::PlayerPrefsException__Class**)(modloader::win::memory::resolve_rva(0x04738940));
        inline app::PlayerPrefsException__Class* get_class() {
            return il2cpp::get_class<app::PlayerPrefsException__Class>(type_info, "UnityEngine", "PlayerPrefsException");
        }
        inline app::PlayerPrefsException* create() {
            return il2cpp::create_object<app::PlayerPrefsException>(get_class());
        }
    } // namespace PlayerPrefsException
} // namespace app::classes::types
