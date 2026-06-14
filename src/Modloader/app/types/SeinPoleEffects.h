#pragma once
#include <Modloader/app/structs/SeinPoleEffects.h>
#include <Modloader/app/structs/SeinPoleEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPoleEffects {
        inline app::SeinPoleEffects__Class** type_info() {
            static app::SeinPoleEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPoleEffects__Class**)(modloader::win::memory::resolve_rva(0x0472CE50));
            }
            return cache;
        }
        inline app::SeinPoleEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinPoleEffects__Class>(type_info(), "", "SeinPoleEffects");
        }
        inline app::SeinPoleEffects* create() {
            return il2cpp::create_object<app::SeinPoleEffects>(get_class());
        }
    } // namespace SeinPoleEffects
} // namespace app::classes::types
