#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTrigger {
        namespace {
            inline app::EventTrigger__Class* type_info_ref = nullptr;
        }
        inline app::EventTrigger__Class** type_info = &type_info_ref;
        inline app::EventTrigger__Class* get_class() {
            return il2cpp::get_class<app::EventTrigger__Class>(type_info, "UnityEngine.EventSystems", "EventTrigger");
        }
        inline app::EventTrigger* create() {
            return il2cpp::create_object<app::EventTrigger>(get_class());
        }
    } // namespace EventTrigger
} // namespace app::classes::types
