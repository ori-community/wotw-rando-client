#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SByteArrayTypeInfo {
        inline app::SByteArrayTypeInfo__Class** type_info = (app::SByteArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04755708));
        inline app::SByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::SByteArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "SByteArrayTypeInfo");
        }
        inline app::SByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::SByteArrayTypeInfo>(get_class());
        }
    } // namespace SByteArrayTypeInfo
} // namespace app::classes::types
