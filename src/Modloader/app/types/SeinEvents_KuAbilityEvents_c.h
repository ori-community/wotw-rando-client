#pragma once
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents_c.h>
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_KuAbilityEvents_c {
        inline app::SeinEvents_KuAbilityEvents_c__Class** type_info() {
            static app::SeinEvents_KuAbilityEvents_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinEvents_KuAbilityEvents_c__Class**)(modloader::win::memory::resolve_rva(0x0473B568));
            }
            return cache;
        }
        inline app::SeinEvents_KuAbilityEvents_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_KuAbilityEvents_c__Class>(type_info(), "Game", "SeinEvents+KuAbilityEvents", "<>c");
        }
        inline app::SeinEvents_KuAbilityEvents_c* create() {
            return il2cpp::create_object<app::SeinEvents_KuAbilityEvents_c>(get_class());
        }
    } // namespace SeinEvents_KuAbilityEvents_c
} // namespace app::classes::types
