#pragma once
#include <Modloader/app/structs/SeinBlazeSpell_BlazeSetupInfo__Array.h>
#include <Modloader/app/structs/SeinBlazeSpell_BlazeSetupInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeSetupInfo__Array {
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array__Class** type_info() {
            static app::SeinBlazeSpell_BlazeSetupInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBlazeSpell_BlazeSetupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473B280));
            }
            return cache;
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BlazeSetupInfo__Array__Class>(type_info(), "", "SeinBlazeSpell+BlazeSetupInfo[]");
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeSetupInfo__Array>(get_class());
        }
    } // namespace SeinBlazeSpell_BlazeSetupInfo__Array
} // namespace app::classes::types
