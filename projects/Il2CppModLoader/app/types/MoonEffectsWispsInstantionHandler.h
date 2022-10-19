#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectsWispsInstantionHandler {
        inline app::MoonEffectsWispsInstantionHandler__Class** type_info = (app::MoonEffectsWispsInstantionHandler__Class**)(modloader::win::memory::resolve_rva(0x04772C88));
        inline app::MoonEffectsWispsInstantionHandler__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectsWispsInstantionHandler__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectsWispsInstantionHandler");
        }
        inline app::MoonEffectsWispsInstantionHandler* create() {
            return il2cpp::create_object<app::MoonEffectsWispsInstantionHandler>(get_class());
        }
    } // namespace MoonEffectsWispsInstantionHandler
} // namespace app::classes::types
