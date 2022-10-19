#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SByteTypeInfo {
        inline app::SByteTypeInfo__Class** type_info = (app::SByteTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x047417B0));
        inline app::SByteTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SByteTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SByteTypeInfo");
        }
        inline app::SByteTypeInfo* create() {
            return il2cpp::create_object<app::SByteTypeInfo>(get_class());
        }
    } // namespace SByteTypeInfo
} // namespace app::classes::types
