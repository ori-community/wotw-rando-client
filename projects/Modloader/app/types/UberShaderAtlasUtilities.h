#pragma once
#include <Modloader/app/structs/UberShaderAtlasUtilities.h>
#include <Modloader/app/structs/UberShaderAtlasUtilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities {
        inline app::UberShaderAtlasUtilities__Class** type_info() {
            static app::UberShaderAtlasUtilities__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAtlasUtilities__Class**)(modloader::win::memory::resolve_rva(0x0475F878));
            }
            return cache;
        }
        inline app::UberShaderAtlasUtilities__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasUtilities__Class>(type_info(), "", "UberShaderAtlasUtilities");
        }
        inline app::UberShaderAtlasUtilities* create() {
            return il2cpp::create_object<app::UberShaderAtlasUtilities>(get_class());
        }
    } // namespace UberShaderAtlasUtilities
} // namespace app::classes::types
