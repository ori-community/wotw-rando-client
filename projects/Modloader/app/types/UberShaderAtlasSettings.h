#pragma once
#include <Modloader/app/structs/UberShaderAtlasSettings.h>
#include <Modloader/app/structs/UberShaderAtlasSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasSettings {
        inline app::UberShaderAtlasSettings__Class** type_info() {
            static app::UberShaderAtlasSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAtlasSettings__Class**)(modloader::win::memory::resolve_rva(0x0478A688));
            }
            return cache;
        }
        inline app::UberShaderAtlasSettings__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasSettings__Class>(type_info(), "", "UberShaderAtlasSettings");
        }
        inline app::UberShaderAtlasSettings* create() {
            return il2cpp::create_object<app::UberShaderAtlasSettings>(get_class());
        }
    } // namespace UberShaderAtlasSettings
} // namespace app::classes::types
