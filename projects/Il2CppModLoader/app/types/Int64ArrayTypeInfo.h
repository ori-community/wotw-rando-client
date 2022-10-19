#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int64ArrayTypeInfo {
        inline app::Int64ArrayTypeInfo__Class** type_info = (app::Int64ArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04718968));
        inline app::Int64ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int64ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int64ArrayTypeInfo");
        }
        inline app::Int64ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int64ArrayTypeInfo>(get_class());
        }
    } // namespace Int64ArrayTypeInfo
} // namespace app::classes::types
