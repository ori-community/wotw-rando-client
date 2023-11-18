#pragma once
#include <Modloader/app/structs/AkAcousticSurface.h>
#include <Modloader/app/structs/AkAcousticSurface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAcousticSurface {
        inline app::AkAcousticSurface__Class** type_info() {
            static app::AkAcousticSurface__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkAcousticSurface__Class**)(modloader::win::memory::resolve_rva(0x0471BFE8));
            }
            return cache;
        }
        inline app::AkAcousticSurface__Class* get_class() {
            return il2cpp::get_class<app::AkAcousticSurface__Class>(type_info(), "", "AkAcousticSurface");
        }
        inline app::AkAcousticSurface* create() {
            return il2cpp::create_object<app::AkAcousticSurface>(get_class());
        }
    } // namespace AkAcousticSurface
} // namespace app::classes::types
