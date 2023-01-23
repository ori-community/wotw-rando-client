#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageDealer_TweakDamageDelegate__Class.h>
#include <Modloader/app/structs/DamageDealer_TweakDamageDelegate.h>

namespace app::classes::types {
    namespace DamageDealer_TweakDamageDelegate {
        inline app::DamageDealer_TweakDamageDelegate__Class** type_info = (app::DamageDealer_TweakDamageDelegate__Class**)(modloader::win::memory::resolve_rva(0x0476AD70));
        inline app::DamageDealer_TweakDamageDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_TweakDamageDelegate__Class>(type_info, "", "DamageDealer", "TweakDamageDelegate");
        }
        inline app::DamageDealer_TweakDamageDelegate* create() {
            return il2cpp::create_object<app::DamageDealer_TweakDamageDelegate>(get_class());
        }
    } // namespace DamageDealer_TweakDamageDelegate
} // namespace app::classes::types
