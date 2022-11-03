#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlertDescription__Enum {
        inline app::AlertDescription__Enum__Class** type_info = (app::AlertDescription__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763F18));
        inline app::AlertDescription__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlertDescription__Enum__Class>(type_info, "Mono.Security.Interface", "AlertDescription");
        }
        inline app::AlertDescription__Enum* create() {
            return il2cpp::create_object<app::AlertDescription__Enum>(get_class());
        }
    } // namespace AlertDescription__Enum
} // namespace app::classes::types
