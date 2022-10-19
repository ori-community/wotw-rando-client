#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int16TypeInfo {
        inline app::Int16TypeInfo__Class** type_info = (app::Int16TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0472E730));
        inline app::Int16TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int16TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int16TypeInfo");
        }
        inline app::Int16TypeInfo* create() {
            return il2cpp::create_object<app::Int16TypeInfo>(get_class());
        }
    } // namespace Int16TypeInfo
} // namespace app::classes::types
