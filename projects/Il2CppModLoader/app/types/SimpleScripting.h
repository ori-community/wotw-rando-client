#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleScripting {
        namespace {
            inline app::SimpleScripting__Class* type_info_ref = nullptr;
        }
        inline app::SimpleScripting__Class** type_info = &type_info_ref;
        inline app::SimpleScripting__Class* get_class() {
            return il2cpp::get_class<app::SimpleScripting__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleScripting");
        }
        inline app::SimpleScripting* create() {
            return il2cpp::create_object<app::SimpleScripting>(get_class());
        }
    } // namespace SimpleScripting
} // namespace app::classes::types
