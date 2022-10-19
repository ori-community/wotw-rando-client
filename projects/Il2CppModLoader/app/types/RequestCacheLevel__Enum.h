#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestCacheLevel__Enum {
        inline app::RequestCacheLevel__Enum__Class** type_info = (app::RequestCacheLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04755218));
        inline app::RequestCacheLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::RequestCacheLevel__Enum__Class>(type_info, "System.Net.Cache", "RequestCacheLevel");
        }
        inline app::RequestCacheLevel__Enum* create() {
            return il2cpp::create_object<app::RequestCacheLevel__Enum>(get_class());
        }
    } // namespace RequestCacheLevel__Enum
} // namespace app::classes::types
