#pragma once
#include <Modloader/app/structs/SeinBlazeSpell_States.h>
#include <Modloader/app/structs/SeinBlazeSpell_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_States {
        inline app::SeinBlazeSpell_States__Class** type_info() {
            static app::SeinBlazeSpell_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBlazeSpell_States__Class**)(modloader::win::memory::resolve_rva(0x0478B440));
            }
            return cache;
        }
        inline app::SeinBlazeSpell_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_States__Class>(type_info(), "", "SeinBlazeSpell", "States");
        }
        inline app::SeinBlazeSpell_States* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_States>(get_class());
        }
    } // namespace SeinBlazeSpell_States
} // namespace app::classes::types
