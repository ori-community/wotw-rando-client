#pragma once
#include <Modloader/app/structs/SeinBowAttack_Settings.h>
#include <Modloader/app/structs/SeinBowAttack_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack_Settings {
        inline app::SeinBowAttack_Settings__Class** type_info() {
            static app::SeinBowAttack_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBowAttack_Settings__Class**)(modloader::win::memory::resolve_rva(0x04702B98));
            }
            return cache;
        }
        inline app::SeinBowAttack_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBowAttack_Settings__Class>(type_info(), "", "SeinBowAttack", "Settings");
        }
        inline app::SeinBowAttack_Settings* create() {
            return il2cpp::create_object<app::SeinBowAttack_Settings>(get_class());
        }
    } // namespace SeinBowAttack_Settings
} // namespace app::classes::types
