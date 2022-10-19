#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int64Storage {
        inline app::Int64Storage__Class** type_info = (app::Int64Storage__Class**)(modloader::win::memory::resolve_rva(0x0478D1A0));
        inline app::Int64Storage__Class* get_class() {
            return il2cpp::get_class<app::Int64Storage__Class>(type_info, "System.Data.Common", "Int64Storage");
        }
        inline app::Int64Storage* create() {
            return il2cpp::create_object<app::Int64Storage>(get_class());
        }
    } // namespace Int64Storage
} // namespace app::classes::types
