#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleAsyncCallback {
        inline app::SimpleAsyncCallback__Class** type_info = (app::SimpleAsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x047942D8));
        inline app::SimpleAsyncCallback__Class* get_class() {
            return il2cpp::get_class<app::SimpleAsyncCallback__Class>(type_info, "System.Net", "SimpleAsyncCallback");
        }
        inline app::SimpleAsyncCallback* create() {
            return il2cpp::create_object<app::SimpleAsyncCallback>(get_class());
        }
    } // namespace SimpleAsyncCallback
} // namespace app::classes::types
