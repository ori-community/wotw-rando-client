#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RetriveActionStates {
        inline app::RetriveActionStates__Class** type_info = (app::RetriveActionStates__Class**)(modloader::win::memory::resolve_rva(0x047800D8));
        inline app::RetriveActionStates__Class* get_class() {
            return il2cpp::get_class<app::RetriveActionStates__Class>(type_info, "", "RetriveActionStates");
        }
        inline app::RetriveActionStates* create() {
            return il2cpp::create_object<app::RetriveActionStates>(get_class());
        }
    } // namespace RetriveActionStates
} // namespace app::classes::types
