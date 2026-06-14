#pragma once
#include <Modloader/app/structs/RaceMenuScreenUISlot.h>
#include <Modloader/app/structs/RaceMenuScreenUISlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenUISlot {
        inline app::RaceMenuScreenUISlot__Class** type_info() {
            static app::RaceMenuScreenUISlot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceMenuScreenUISlot__Class**)(modloader::win::memory::resolve_rva(0x0477BAA8));
            }
            return cache;
        }
        inline app::RaceMenuScreenUISlot__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenUISlot__Class>(type_info(), "", "RaceMenuScreenUISlot");
        }
        inline app::RaceMenuScreenUISlot* create() {
            return il2cpp::create_object<app::RaceMenuScreenUISlot>(get_class());
        }
    } // namespace RaceMenuScreenUISlot
} // namespace app::classes::types
