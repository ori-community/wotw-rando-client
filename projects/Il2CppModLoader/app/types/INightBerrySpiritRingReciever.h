#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INightBerrySpiritRingReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INightBerrySpiritRingReciever__Class** type_info;
        inline app::INightBerrySpiritRingReciever__Class* get_class() {
            return il2cpp::get_class<app::INightBerrySpiritRingReciever__Class>(type_info, "", "INightBerrySpiritRingReciever");
        }
        inline app::INightBerrySpiritRingReciever* create() {
            return il2cpp::create_object<app::INightBerrySpiritRingReciever>(get_class());
        }
    } // namespace INightBerrySpiritRingReciever
} // namespace app::classes::types
