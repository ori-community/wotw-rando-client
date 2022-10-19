#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeeSeinTrigger {
        namespace {
            inline app::SeeSeinTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SeeSeinTrigger__Class** type_info = &type_info_ref;
        inline app::SeeSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeeSeinTrigger__Class>(type_info, "", "SeeSeinTrigger");
        }
        inline app::SeeSeinTrigger* create() {
            return il2cpp::create_object<app::SeeSeinTrigger>(get_class());
        }
    } // namespace SeeSeinTrigger
} // namespace app::classes::types
