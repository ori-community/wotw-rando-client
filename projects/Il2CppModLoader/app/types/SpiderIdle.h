#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderIdle {
        namespace {
            inline app::SpiderIdle__Class* type_info_ref = nullptr;
        }
        inline app::SpiderIdle__Class** type_info = &type_info_ref;
        inline app::SpiderIdle__Class* get_class() {
            return il2cpp::get_class<app::SpiderIdle__Class>(type_info, "", "SpiderIdle");
        }
        inline app::SpiderIdle* create() {
            return il2cpp::create_object<app::SpiderIdle>(get_class());
        }
    } // namespace SpiderIdle
} // namespace app::classes::types
