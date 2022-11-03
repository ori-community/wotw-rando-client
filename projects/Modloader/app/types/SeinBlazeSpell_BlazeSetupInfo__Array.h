#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BlazeSetupInfo__Array {
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array__Class** type_info = (app::SeinBlazeSpell_BlazeSetupInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473B280));
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BlazeSetupInfo__Array__Class>(type_info, "", "SeinBlazeSpell+BlazeSetupInfo[]");
        }
        inline app::SeinBlazeSpell_BlazeSetupInfo__Array* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BlazeSetupInfo__Array>(get_class());
        }
    } // namespace SeinBlazeSpell_BlazeSetupInfo__Array
} // namespace app::classes::types
