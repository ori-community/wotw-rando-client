#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWeaponsEffects__Class.h>
#include <Modloader/app/structs/SeinWeaponsEffects.h>

namespace app::classes::types {
    namespace SeinWeaponsEffects {
        namespace {
            inline app::SeinWeaponsEffects__Class* type_info_ref = nullptr;
        }
        inline app::SeinWeaponsEffects__Class** type_info = &type_info_ref;
        inline app::SeinWeaponsEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinWeaponsEffects__Class>(type_info, "", "SeinWeaponsEffects");
        }
        inline app::SeinWeaponsEffects* create() {
            return il2cpp::create_object<app::SeinWeaponsEffects>(get_class());
        }
    } // namespace SeinWeaponsEffects
} // namespace app::classes::types
