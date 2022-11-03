#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever_ModifyDamageDelegate {
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class** type_info = (app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class**)(modloader::win::memory::resolve_rva(0x04713F20));
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class>(type_info, "", "LegacyEntityDamageReciever", "ModifyDamageDelegate");
        }
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever_ModifyDamageDelegate>(get_class());
        }
    } // namespace LegacyEntityDamageReciever_ModifyDamageDelegate
} // namespace app::classes::types
