#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimedTrigger {
        namespace {
            inline app::TimedTrigger__Class* type_info_ref = nullptr;
        }
        inline app::TimedTrigger__Class** type_info = &type_info_ref;
        inline app::TimedTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimedTrigger__Class>(type_info, "", "TimedTrigger");
        }
        inline app::TimedTrigger* create() {
            return il2cpp::create_object<app::TimedTrigger>(get_class());
        }
    } // namespace TimedTrigger
} // namespace app::classes::types
