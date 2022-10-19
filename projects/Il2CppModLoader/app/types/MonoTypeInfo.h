#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTypeInfo {
        inline app::MonoTypeInfo__Class** type_info = (app::MonoTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0473D1D0));
        inline app::MonoTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoTypeInfo__Class>(type_info, "System", "MonoTypeInfo");
        }
        inline app::MonoTypeInfo* create() {
            return il2cpp::create_object<app::MonoTypeInfo>(get_class());
        }
    } // namespace MonoTypeInfo
} // namespace app::classes::types
