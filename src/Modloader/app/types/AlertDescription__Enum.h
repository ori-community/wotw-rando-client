#pragma once
#include <Modloader/app/structs/AlertDescription__Enum.h>
#include <Modloader/app/structs/AlertDescription__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlertDescription__Enum {
        inline app::AlertDescription__Enum__Class** type_info() {
            static app::AlertDescription__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AlertDescription__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763F18));
            }
            return cache;
        }
        inline app::AlertDescription__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertDescription__Enum__Class>(type_info(), "Mono.Security.Interface", "AlertDescription");
        }
        inline app::AlertDescription__Enum* create() {
            return il2cpp::create_object<app::AlertDescription__Enum>(get_class());
        }
    } // namespace AlertDescription__Enum
} // namespace app::classes::types
