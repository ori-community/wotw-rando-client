#pragma once
#include <Modloader/app/structs/AlertLevel__Enum_1.h>
#include <Modloader/app/structs/AlertLevel__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertLevel__Enum_1 {
        inline app::AlertLevel__Enum_1__Class** type_info() {
            static app::AlertLevel__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AlertLevel__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04721900));
            }
            return cache;
        }
        inline app::AlertLevel__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::AlertLevel__Enum_1__Class>(type_info(), "Mono.Security.Interface", "AlertLevel");
        }
        inline app::AlertLevel__Enum_1* create() {
            return il2cpp::create_object<app::AlertLevel__Enum_1>(get_class());
        }
    } // namespace AlertLevel__Enum_1
} // namespace app::classes::types
