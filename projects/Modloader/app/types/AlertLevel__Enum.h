#pragma once
#include <Modloader/app/structs/AlertLevel__Enum.h>
#include <Modloader/app/structs/AlertLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertLevel__Enum {
        inline app::AlertLevel__Enum__Class** type_info() {
            static app::AlertLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AlertLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753320));
            }
            return cache;
        }
        inline app::AlertLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertLevel__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "AlertLevel");
        }
        inline app::AlertLevel__Enum* create() {
            return il2cpp::create_object<app::AlertLevel__Enum>(get_class());
        }
    } // namespace AlertLevel__Enum
} // namespace app::classes::types
