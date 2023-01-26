#pragma once
#include <Modloader/app/structs/BoolPref.h>
#include <Modloader/app/structs/BoolPref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoolPref {
        inline app::BoolPref__Class** type_info() {
            static app::BoolPref__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BoolPref__Class**)(modloader::win::memory::resolve_rva(0x04716300));
            }
            return cache;
        }
        inline app::BoolPref__Class* get_class() {
            return il2cpp::get_class<app::BoolPref__Class>(type_info(), "Moon.PlayerPrefsUtility", "BoolPref");
        }
        inline app::BoolPref* create() {
            return il2cpp::create_object<app::BoolPref>(get_class());
        }
    } // namespace BoolPref
} // namespace app::classes::types
