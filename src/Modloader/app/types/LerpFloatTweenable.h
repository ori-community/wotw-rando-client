#pragma once
#include <Modloader/app/structs/LerpFloatTweenable.h>
#include <Modloader/app/structs/LerpFloatTweenable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LerpFloatTweenable {
        inline app::LerpFloatTweenable__Class** type_info() {
            static app::LerpFloatTweenable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LerpFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0471BA38));
            }
            return cache;
        }
        inline app::LerpFloatTweenable__Class* get_class() {
            return il2cpp::get_class<app::LerpFloatTweenable__Class>(type_info(), "Moon", "LerpFloatTweenable");
        }
        inline app::LerpFloatTweenable* create() {
            return il2cpp::create_object<app::LerpFloatTweenable>(get_class());
        }
    } // namespace LerpFloatTweenable
} // namespace app::classes::types
