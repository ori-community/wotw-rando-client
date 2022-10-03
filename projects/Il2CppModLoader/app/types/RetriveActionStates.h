#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetriveActionStates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RetriveActionStates__Class** type_info;
        inline app::RetriveActionStates__Class* get_class() {
            return il2cpp::get_class<app::RetriveActionStates__Class>(type_info, "", "RetriveActionStates");
        }
        inline app::RetriveActionStates* create() {
            return il2cpp::create_object<app::RetriveActionStates>(get_class());
        }
    } // namespace RetriveActionStates
} // namespace app::classes::types
