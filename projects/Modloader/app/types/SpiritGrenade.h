#pragma once
#include <Modloader/app/structs/SpiritGrenade.h>
#include <Modloader/app/structs/SpiritGrenade__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritGrenade {
        inline app::SpiritGrenade__Class** type_info() {
            static app::SpiritGrenade__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritGrenade__Class**)(modloader::win::memory::resolve_rva(0x04702068));
            }
            return cache;
        }
        inline app::SpiritGrenade__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenade__Class>(type_info(), "", "SpiritGrenade");
        }
        inline app::SpiritGrenade* create() {
            return il2cpp::create_object<app::SpiritGrenade>(get_class());
        }
    } // namespace SpiritGrenade
} // namespace app::classes::types
