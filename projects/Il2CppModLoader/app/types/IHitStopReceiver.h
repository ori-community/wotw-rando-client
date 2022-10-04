#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IHitStopReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IHitStopReceiver__Class** type_info;
        inline app::IHitStopReceiver__Class* get_class() {
            return il2cpp::get_class<app::IHitStopReceiver__Class>(type_info, "Moon", "IHitStopReceiver");
        }
        inline app::IHitStopReceiver* create() {
            return il2cpp::create_object<app::IHitStopReceiver>(get_class());
        }
    } // namespace IHitStopReceiver
} // namespace app::classes::types
