#pragma once
#include <Modloader/app/structs/UberShaderTextureCube.h>
#include <Modloader/app/structs/UberShaderTextureCube__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderTextureCube {
        inline app::UberShaderTextureCube__Class** type_info() {
            static app::UberShaderTextureCube__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderTextureCube__Class**)(modloader::win::memory::resolve_rva(0x0472DF18));
            }
            return cache;
        }
        inline app::UberShaderTextureCube__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureCube__Class>(type_info(), "", "UberShaderTextureCube");
        }
        inline app::UberShaderTextureCube* create() {
            return il2cpp::create_object<app::UberShaderTextureCube>(get_class());
        }
    } // namespace UberShaderTextureCube
} // namespace app::classes::types
