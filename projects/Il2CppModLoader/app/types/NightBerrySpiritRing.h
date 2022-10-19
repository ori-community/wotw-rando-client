#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightBerrySpiritRing {
        namespace {
            inline app::NightBerrySpiritRing__Class* type_info_ref = nullptr;
        }
        inline app::NightBerrySpiritRing__Class** type_info = &type_info_ref;
        inline app::NightBerrySpiritRing__Class* get_class() {
            return il2cpp::get_class<app::NightBerrySpiritRing__Class>(type_info, "", "NightBerrySpiritRing");
        }
        inline app::NightBerrySpiritRing* create() {
            return il2cpp::create_object<app::NightBerrySpiritRing>(get_class());
        }
    } // namespace NightBerrySpiritRing
} // namespace app::classes::types
