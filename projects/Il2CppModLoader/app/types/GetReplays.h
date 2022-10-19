#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetReplays {
        inline app::GetReplays__Class** type_info = (app::GetReplays__Class**)(modloader::win::memory::resolve_rva(0x0476A6D0));
        inline app::GetReplays__Class* get_class() {
            return il2cpp::get_class<app::GetReplays__Class>(type_info, "", "GetReplays");
        }
        inline app::GetReplays* create() {
            return il2cpp::create_object<app::GetReplays>(get_class());
        }
    } // namespace GetReplays
} // namespace app::classes::types
