#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonsterGrabPosition {
        namespace {
            inline app::MonsterGrabPosition__Class* type_info_ref = nullptr;
        }
        inline app::MonsterGrabPosition__Class** type_info = &type_info_ref;
        inline app::MonsterGrabPosition__Class* get_class() {
            return il2cpp::get_class<app::MonsterGrabPosition__Class>(type_info, "", "MonsterGrabPosition");
        }
        inline app::MonsterGrabPosition* create() {
            return il2cpp::create_object<app::MonsterGrabPosition>(get_class());
        }
    } // namespace MonsterGrabPosition
} // namespace app::classes::types
