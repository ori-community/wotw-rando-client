#pragma once
#include <Modloader/app/structs/EnvironmentLightTexture.h>
#include <Modloader/app/structs/EnvironmentLightTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLightTexture {
        inline app::EnvironmentLightTexture__Class** type_info() {
            static app::EnvironmentLightTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnvironmentLightTexture__Class**)(modloader::win::memory::resolve_rva(0x0477D7F8));
            }
            return cache;
        }
        inline app::EnvironmentLightTexture__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightTexture__Class>(type_info(), "", "EnvironmentLightTexture");
        }
        inline app::EnvironmentLightTexture* create() {
            return il2cpp::create_object<app::EnvironmentLightTexture>(get_class());
        }
    } // namespace EnvironmentLightTexture
} // namespace app::classes::types
