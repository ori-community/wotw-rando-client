#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMonitorErrorCode__Enum {
        inline app::AkMonitorErrorCode__Enum__Class** type_info = (app::AkMonitorErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474BC00));
        inline app::AkMonitorErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMonitorErrorCode__Enum__Class>(type_info, "", "AkMonitorErrorCode");
        }
        inline app::AkMonitorErrorCode__Enum* create() {
            return il2cpp::create_object<app::AkMonitorErrorCode__Enum>(get_class());
        }
    } // namespace AkMonitorErrorCode__Enum
} // namespace app::classes::types
