#pragma once
#include <Modloader/app/structs/AlertDescription__Enum_1.h>
#include <Modloader/app/structs/AlertDescription__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertDescription__Enum_1 {
        inline app::AlertDescription__Enum_1__Class** type_info() {
            static app::AlertDescription__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AlertDescription__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04741EE0));
            }
            return cache;
        }
        inline app::AlertDescription__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::AlertDescription__Enum_1__Class>(type_info(), "Mono.Security.Protocol.Tls", "AlertDescription");
        }
        inline app::AlertDescription__Enum_1* create() {
            return il2cpp::create_object<app::AlertDescription__Enum_1>(get_class());
        }
    } // namespace AlertDescription__Enum_1
} // namespace app::classes::types
