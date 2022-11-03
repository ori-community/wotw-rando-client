#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMonitorErrorLevel__Enum {
        inline app::AkMonitorErrorLevel__Enum__Class** type_info = (app::AkMonitorErrorLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739C18));
        inline app::AkMonitorErrorLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMonitorErrorLevel__Enum__Class>(type_info, "", "AkMonitorErrorLevel");
        }
        inline app::AkMonitorErrorLevel__Enum* create() {
            return il2cpp::create_object<app::AkMonitorErrorLevel__Enum>(get_class());
        }
    } // namespace AkMonitorErrorLevel__Enum
} // namespace app::classes::types
