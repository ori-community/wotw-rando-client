#pragma once
#include <Modloader/app/structs/SeinSoulFlame.h>
#include <Modloader/app/structs/SeinSoulFlame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlame {
        inline app::SeinSoulFlame__Class** type_info() {
            static app::SeinSoulFlame__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSoulFlame__Class**)(modloader::win::memory::resolve_rva(0x04795B58));
            }
            return cache;
        }
        inline app::SeinSoulFlame__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlame__Class>(type_info(), "", "SeinSoulFlame");
        }
        inline app::SeinSoulFlame* create() {
            return il2cpp::create_object<app::SeinSoulFlame>(get_class());
        }
    } // namespace SeinSoulFlame
} // namespace app::classes::types
