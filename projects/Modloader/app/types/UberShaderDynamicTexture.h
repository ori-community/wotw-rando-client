#pragma once
#include <Modloader/app/structs/UberShaderDynamicTexture.h>
#include <Modloader/app/structs/UberShaderDynamicTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderDynamicTexture {
        inline app::UberShaderDynamicTexture__Class** type_info() {
            static app::UberShaderDynamicTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderDynamicTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderDynamicTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDynamicTexture__Class>(type_info(), "", "UberShaderDynamicTexture");
        }
        inline app::UberShaderDynamicTexture* create() {
            return il2cpp::create_object<app::UberShaderDynamicTexture>(get_class());
        }
    } // namespace UberShaderDynamicTexture
} // namespace app::classes::types
