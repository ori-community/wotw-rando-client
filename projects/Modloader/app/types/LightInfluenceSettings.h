#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightInfluenceSettings {
        inline app::LightInfluenceSettings__Class** type_info = (app::LightInfluenceSettings__Class**)(modloader::win::memory::resolve_rva(0x047120D8));
        inline app::LightInfluenceSettings__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSettings__Class>(type_info, "", "LightInfluenceSettings");
        }
        inline app::LightInfluenceSettings* create() {
            return il2cpp::create_object<app::LightInfluenceSettings>(get_class());
        }
    } // namespace LightInfluenceSettings
} // namespace app::classes::types
