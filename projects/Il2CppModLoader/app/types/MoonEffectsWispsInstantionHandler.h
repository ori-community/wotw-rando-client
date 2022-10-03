#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectsWispsInstantionHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectsWispsInstantionHandler__Class** type_info;
        inline app::MoonEffectsWispsInstantionHandler__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectsWispsInstantionHandler__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectsWispsInstantionHandler");
        }
        inline app::MoonEffectsWispsInstantionHandler* create() {
            return il2cpp::create_object<app::MoonEffectsWispsInstantionHandler>(get_class());
        }
    } // namespace MoonEffectsWispsInstantionHandler
} // namespace app::classes::types
