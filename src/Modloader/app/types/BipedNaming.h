#pragma once
#include <Modloader/app/structs/BipedNaming.h>
#include <Modloader/app/structs/BipedNaming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedNaming {
        inline app::BipedNaming__Class** type_info() {
            static app::BipedNaming__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BipedNaming__Class**)(modloader::win::memory::resolve_rva(0x0474BC10));
            }
            return cache;
        }
        inline app::BipedNaming__Class* get_class() {
            return il2cpp::get_class<app::BipedNaming__Class>(type_info(), "RootMotion", "BipedNaming");
        }
        inline app::BipedNaming* create() {
            return il2cpp::create_object<app::BipedNaming>(get_class());
        }
    } // namespace BipedNaming
} // namespace app::classes::types
