#pragma once
#include <Modloader/app/structs/SeinCinematic.h>
#include <Modloader/app/structs/SeinCinematic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCinematic {
        inline app::SeinCinematic__Class** type_info() {
            static app::SeinCinematic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinCinematic__Class**)(modloader::win::memory::resolve_rva(0x0476EFC8));
            }
            return cache;
        }
        inline app::SeinCinematic__Class* get_class() {
            return il2cpp::get_class<app::SeinCinematic__Class>(type_info(), "", "SeinCinematic");
        }
        inline app::SeinCinematic* create() {
            return il2cpp::create_object<app::SeinCinematic>(get_class());
        }
    } // namespace SeinCinematic
} // namespace app::classes::types
