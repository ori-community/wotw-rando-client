#pragma once
#include <Modloader/app/structs/BipedReferences.h>
#include <Modloader/app/structs/BipedReferences__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedReferences {
        inline app::BipedReferences__Class** type_info() {
            static app::BipedReferences__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BipedReferences__Class**)(modloader::win::memory::resolve_rva(0x0473EA18));
            }
            return cache;
        }
        inline app::BipedReferences__Class* get_class() {
            return il2cpp::get_class<app::BipedReferences__Class>(type_info(), "RootMotion", "BipedReferences");
        }
        inline app::BipedReferences* create() {
            return il2cpp::create_object<app::BipedReferences>(get_class());
        }
    } // namespace BipedReferences
} // namespace app::classes::types
