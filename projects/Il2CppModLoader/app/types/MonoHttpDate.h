#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoHttpDate {
        inline app::MonoHttpDate__Class** type_info = (app::MonoHttpDate__Class**)(modloader::win::memory::resolve_rva(0x04756EB8));
        inline app::MonoHttpDate__Class* get_class() {
            return il2cpp::get_class<app::MonoHttpDate__Class>(type_info, "System.Net", "MonoHttpDate");
        }
        inline app::MonoHttpDate* create() {
            return il2cpp::create_object<app::MonoHttpDate>(get_class());
        }
    } // namespace MonoHttpDate
} // namespace app::classes::types
