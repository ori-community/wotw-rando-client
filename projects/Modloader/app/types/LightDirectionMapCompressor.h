#pragma once
#include <Modloader/app/structs/LightDirectionMapCompressor.h>
#include <Modloader/app/structs/LightDirectionMapCompressor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDirectionMapCompressor {
        inline app::LightDirectionMapCompressor__Class** type_info() {
            static app::LightDirectionMapCompressor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightDirectionMapCompressor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightDirectionMapCompressor__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapCompressor__Class>(type_info(), "UberShader", "LightDirectionMapCompressor");
        }
        inline app::LightDirectionMapCompressor* create() {
            return il2cpp::create_object<app::LightDirectionMapCompressor>(get_class());
        }
    } // namespace LightDirectionMapCompressor
} // namespace app::classes::types
