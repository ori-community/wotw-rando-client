#pragma once
#include <Modloader/app/structs/EffectType__Enum.h>
#include <Modloader/app/structs/EffectType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EffectType__Enum {
        inline app::EffectType__Enum__Class** type_info() {
            static app::EffectType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EffectType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04736810));
            }
            return cache;
        }
        inline app::EffectType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EffectType__Enum__Class>(type_info(), "PlayFab.ProfilesModels", "EffectType");
        }
        inline app::EffectType__Enum* create() {
            return il2cpp::create_object<app::EffectType__Enum>(get_class());
        }
    } // namespace EffectType__Enum
} // namespace app::classes::types
