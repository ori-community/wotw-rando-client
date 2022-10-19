#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemGroupBase_c {
        inline app::CleverMenuItemGroupBase_c__Class** type_info = (app::CleverMenuItemGroupBase_c__Class**)(modloader::win::memory::resolve_rva(0x04753968));
        inline app::CleverMenuItemGroupBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemGroupBase_c__Class>(type_info, "", "CleverMenuItemGroupBase", "<>c");
        }
        inline app::CleverMenuItemGroupBase_c* create() {
            return il2cpp::create_object<app::CleverMenuItemGroupBase_c>(get_class());
        }
    } // namespace CleverMenuItemGroupBase_c
} // namespace app::classes::types
