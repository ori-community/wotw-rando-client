#pragma once
#include <Modloader/app/structs/AkMonitorErrorCode__Enum.h>
#include <Modloader/app/structs/AkMonitorErrorCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMonitorErrorCode__Enum {
        inline app::AkMonitorErrorCode__Enum__Class** type_info() {
            static app::AkMonitorErrorCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMonitorErrorCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474BC00));
            }
            return cache;
        }
        inline app::AkMonitorErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMonitorErrorCode__Enum__Class>(type_info(), "", "AkMonitorErrorCode");
        }
        inline app::AkMonitorErrorCode__Enum* create() {
            return il2cpp::create_object<app::AkMonitorErrorCode__Enum>(get_class());
        }
    } // namespace AkMonitorErrorCode__Enum
} // namespace app::classes::types
