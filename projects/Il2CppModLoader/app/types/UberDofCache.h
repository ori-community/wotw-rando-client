#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberDofCache {
        namespace {
            inline app::UberDofCache__Class* type_info_ref = nullptr;
        }
        inline app::UberDofCache__Class** type_info = &type_info_ref;
        inline app::UberDofCache__Class* get_class() {
            return il2cpp::get_class<app::UberDofCache__Class>(type_info, "", "UberDofCache");
        }
        inline app::UberDofCache* create() {
            return il2cpp::create_object<app::UberDofCache>(get_class());
        }
    } // namespace UberDofCache
} // namespace app::classes::types
