#pragma once
#include <Modloader/app/structs/SeinEnergy.h>
#include <Modloader/app/structs/SeinEnergy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergy {
        inline app::SeinEnergy__Class** type_info() {
            static app::SeinEnergy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinEnergy__Class**)(modloader::win::memory::resolve_rva(0x04773B88));
            }
            return cache;
        }
        inline app::SeinEnergy__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergy__Class>(type_info(), "", "SeinEnergy");
        }
        inline app::SeinEnergy* create() {
            return il2cpp::create_object<app::SeinEnergy>(get_class());
        }
    } // namespace SeinEnergy
} // namespace app::classes::types
