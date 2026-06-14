#pragma once
#include <Modloader/app/structs/UberShaderMainTexture.h>
#include <Modloader/app/structs/UberShaderMainTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderMainTexture {
        inline app::UberShaderMainTexture__Class** type_info() {
            static app::UberShaderMainTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderMainTexture__Class**)(modloader::win::memory::resolve_rva(0x047660C8));
            }
            return cache;
        }
        inline app::UberShaderMainTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMainTexture__Class>(type_info(), "", "UberShaderMainTexture");
        }
        inline app::UberShaderMainTexture* create() {
            return il2cpp::create_object<app::UberShaderMainTexture>(get_class());
        }
    } // namespace UberShaderMainTexture
} // namespace app::classes::types
