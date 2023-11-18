#pragma once
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMonitorErrorLevel__Enum {
        inline app::AkMonitorErrorLevel__Enum__Class** type_info() {
            static app::AkMonitorErrorLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMonitorErrorLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739C18));
            }
            return cache;
        }
        inline app::AkMonitorErrorLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMonitorErrorLevel__Enum__Class>(type_info(), "", "AkMonitorErrorLevel");
        }
        inline app::AkMonitorErrorLevel__Enum* create() {
            return il2cpp::create_object<app::AkMonitorErrorLevel__Enum>(get_class());
        }
    } // namespace AkMonitorErrorLevel__Enum
} // namespace app::classes::types
