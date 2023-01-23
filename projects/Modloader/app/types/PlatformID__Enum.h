#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlatformID__Enum__Class.h>
#include <Modloader/app/structs/PlatformID__Enum.h>
#include <Modloader/app/structs/PlatformId__Enum__Class.h>
#include <Modloader/app/structs/PlatformId__Enum.h>

namespace app::classes::types {
    namespace PlatformID__Enum {
        inline app::PlatformID__Enum__Class** type_info = (app::PlatformID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734B68));
        inline app::PlatformID__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformID__Enum__Class>(type_info, "System", "PlatformID");
        }
        inline app::PlatformID__Enum* create() {
            return il2cpp::create_object<app::PlatformID__Enum>(get_class());
        }
    } // namespace PlatformID__Enum
} // namespace app::classes::types
#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
