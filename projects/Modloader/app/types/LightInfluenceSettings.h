#pragma once
#include <Modloader/app/structs/LightInfluenceSettings.h>
#include <Modloader/app/structs/LightInfluenceSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightInfluenceSettings {
        inline app::LightInfluenceSettings__Class** type_info() {
            static app::LightInfluenceSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightInfluenceSettings__Class**)(modloader::win::memory::resolve_rva(0x047120D8));
            }
            return cache;
        }
        inline app::LightInfluenceSettings__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSettings__Class>(type_info(), "", "LightInfluenceSettings");
        }
        inline app::LightInfluenceSettings* create() {
            return il2cpp::create_object<app::LightInfluenceSettings>(get_class());
        }
    } // namespace LightInfluenceSettings
} // namespace app::classes::types
