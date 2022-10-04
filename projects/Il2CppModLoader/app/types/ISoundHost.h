#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISoundHost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISoundHost__Class** type_info;
        inline app::ISoundHost__Class* get_class() {
            return il2cpp::get_class<app::ISoundHost__Class>(type_info, "Moon.Wwise", "ISoundHost");
        }
        inline app::ISoundHost* create() {
            return il2cpp::create_object<app::ISoundHost>(get_class());
        }
    } // namespace ISoundHost
} // namespace app::classes::types
