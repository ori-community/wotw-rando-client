#pragma once
#include <Modloader/app/structs/NoiseSettings.h>
#include <Modloader/app/structs/NoiseSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoiseSettings {
        inline app::NoiseSettings__Class** type_info() {
            static app::NoiseSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoiseSettings__Class**)(modloader::win::memory::resolve_rva(0x04764C38));
            }
            return cache;
        }
        inline app::NoiseSettings__Class* get_class() {
            return il2cpp::get_class<app::NoiseSettings__Class>(type_info(), "", "NoiseSettings");
        }
        inline app::NoiseSettings* create() {
            return il2cpp::create_object<app::NoiseSettings>(get_class());
        }
    } // namespace NoiseSettings
} // namespace app::classes::types
