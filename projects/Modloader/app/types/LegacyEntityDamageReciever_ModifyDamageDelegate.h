#pragma once
#include <Modloader/app/structs/LegacyEntityDamageReciever_ModifyDamageDelegate.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever_ModifyDamageDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEntityDamageReciever_ModifyDamageDelegate {
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class** type_info() {
            static app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class**)(modloader::win::memory::resolve_rva(0x04713F20));
            }
            return cache;
        }
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyEntityDamageReciever_ModifyDamageDelegate__Class>(type_info(), "", "LegacyEntityDamageReciever", "ModifyDamageDelegate");
        }
        inline app::LegacyEntityDamageReciever_ModifyDamageDelegate* create() {
            return il2cpp::create_object<app::LegacyEntityDamageReciever_ModifyDamageDelegate>(get_class());
        }
    } // namespace LegacyEntityDamageReciever_ModifyDamageDelegate
} // namespace app::classes::types
