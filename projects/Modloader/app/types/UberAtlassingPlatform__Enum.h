#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberAtlassingPlatform__Enum {
        inline app::UberAtlassingPlatform__Enum__Class** type_info = (app::UberAtlassingPlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475FDA8));
        inline app::UberAtlassingPlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberAtlassingPlatform__Enum__Class>(type_info, "", "UberAtlassingPlatform");
        }
        inline app::UberAtlassingPlatform__Enum* create() {
            return il2cpp::create_object<app::UberAtlassingPlatform__Enum>(get_class());
        }
    } // namespace UberAtlassingPlatform__Enum
} // namespace app::classes::types
