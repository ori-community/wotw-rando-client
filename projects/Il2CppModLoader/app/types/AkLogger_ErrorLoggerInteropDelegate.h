#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkLogger_ErrorLoggerInteropDelegate {
        inline app::AkLogger_ErrorLoggerInteropDelegate__Class** type_info = (app::AkLogger_ErrorLoggerInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047802A8));
        inline app::AkLogger_ErrorLoggerInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkLogger_ErrorLoggerInteropDelegate__Class>(type_info, "", "AkLogger", "ErrorLoggerInteropDelegate");
        }
        inline app::AkLogger_ErrorLoggerInteropDelegate* create() {
            return il2cpp::create_object<app::AkLogger_ErrorLoggerInteropDelegate>(get_class());
        }
    } // namespace AkLogger_ErrorLoggerInteropDelegate
} // namespace app::classes::types
