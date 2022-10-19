#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntPtrArrayTypeInfo {
        inline app::IntPtrArrayTypeInfo__Class** type_info = (app::IntPtrArrayTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04774740));
        inline app::IntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "IntPtrArrayTypeInfo");
        }
        inline app::IntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrArrayTypeInfo>(get_class());
        }
    } // namespace IntPtrArrayTypeInfo
} // namespace app::classes::types
