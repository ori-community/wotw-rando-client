#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaBallWaterZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MetaBallWaterZone__Class** type_info;
        inline app::MetaBallWaterZone__Class* get_class() {
            return il2cpp::get_class<app::MetaBallWaterZone__Class>(type_info, "", "MetaBallWaterZone");
        }
        inline app::MetaBallWaterZone* create() {
            return il2cpp::create_object<app::MetaBallWaterZone>(get_class());
        }
    } // namespace MetaBallWaterZone
} // namespace app::classes::types
