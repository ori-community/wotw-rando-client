#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompleteQuest {
        namespace {
            inline app::CompleteQuest__Class* type_info_ref = nullptr;
        }
        inline app::CompleteQuest__Class** type_info = &type_info_ref;
        inline app::CompleteQuest__Class* get_class() {
            return il2cpp::get_class<app::CompleteQuest__Class>(type_info, "", "CompleteQuest");
        }
        inline app::CompleteQuest* create() {
            return il2cpp::create_object<app::CompleteQuest>(get_class());
        }
    } // namespace CompleteQuest
} // namespace app::classes::types
