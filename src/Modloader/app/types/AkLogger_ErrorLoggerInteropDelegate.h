#pragma once
#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate.h>
#include <Modloader/app/structs/AkLogger_ErrorLoggerInteropDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkLogger_ErrorLoggerInteropDelegate {
        inline app::AkLogger_ErrorLoggerInteropDelegate__Class** type_info() {
            static app::AkLogger_ErrorLoggerInteropDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkLogger_ErrorLoggerInteropDelegate__Class**)(modloader::win::memory::resolve_rva(0x047802A8));
            }
            return cache;
        }
        inline app::AkLogger_ErrorLoggerInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkLogger_ErrorLoggerInteropDelegate__Class>(type_info(), "", "AkLogger", "ErrorLoggerInteropDelegate");
        }
        inline app::AkLogger_ErrorLoggerInteropDelegate* create() {
            return il2cpp::create_object<app::AkLogger_ErrorLoggerInteropDelegate>(get_class());
        }
    } // namespace AkLogger_ErrorLoggerInteropDelegate
} // namespace app::classes::types
