#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ErrorContext {
        inline app::ErrorContext__Class** type_info = (app::ErrorContext__Class**)(modloader::win::memory::resolve_rva(0x047332E0));
        inline app::ErrorContext__Class* get_class() {
            return il2cpp::get_class<app::ErrorContext__Class>(type_info, "Newtonsoft.Json.Serialization", "ErrorContext");
        }
        inline app::ErrorContext* create() {
            return il2cpp::create_object<app::ErrorContext>(get_class());
        }
    } // namespace ErrorContext
} // namespace app::classes::types
