#pragma once
#include <Modloader/app/structs/MoonEffectsWispsInstantionHandler.h>
#include <Modloader/app/structs/MoonEffectsWispsInstantionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectsWispsInstantionHandler {
        inline app::MoonEffectsWispsInstantionHandler__Class** type_info() {
            static app::MoonEffectsWispsInstantionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectsWispsInstantionHandler__Class**)(modloader::win::memory::resolve_rva(0x04772C88));
            }
            return cache;
        }
        inline app::MoonEffectsWispsInstantionHandler__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectsWispsInstantionHandler__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectsWispsInstantionHandler");
        }
        inline app::MoonEffectsWispsInstantionHandler* create() {
            return il2cpp::create_object<app::MoonEffectsWispsInstantionHandler>(get_class());
        }
    } // namespace MoonEffectsWispsInstantionHandler
} // namespace app::classes::types
