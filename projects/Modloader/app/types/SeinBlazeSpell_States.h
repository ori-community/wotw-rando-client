#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBlazeSpell_States__Class.h>
#include <Modloader/app/structs/SeinBlazeSpell_States.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_States {
        inline app::SeinBlazeSpell_States__Class** type_info = (app::SeinBlazeSpell_States__Class**)(modloader::win::memory::resolve_rva(0x0478B440));
        inline app::SeinBlazeSpell_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_States__Class>(type_info, "", "SeinBlazeSpell", "States");
        }
        inline app::SeinBlazeSpell_States* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_States>(get_class());
        }
    } // namespace SeinBlazeSpell_States
} // namespace app::classes::types
