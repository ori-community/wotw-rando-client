#pragma once
#include <Modloader/app/structs/LerpVector3Tweenable.h>
#include <Modloader/app/structs/LerpVector3Tweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LerpVector3Tweenable {
        inline app::LerpVector3Tweenable__Class** type_info() {
            static app::LerpVector3Tweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LerpVector3Tweenable__Class**)(modloader::win::memory::resolve_rva(0x0473C8F0));
            }
            return cache;
        }
        inline app::LerpVector3Tweenable__Class* get_class() {
            return il2cpp::get_class<app::LerpVector3Tweenable__Class>(type_info(), "Moon", "LerpVector3Tweenable");
        }
        inline app::LerpVector3Tweenable* create() {
            return il2cpp::create_object<app::LerpVector3Tweenable>(get_class());
        }
    } // namespace LerpVector3Tweenable
} // namespace app::classes::types
