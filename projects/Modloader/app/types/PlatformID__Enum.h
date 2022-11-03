#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

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

namespace app::classes::types {
    namespace PlatformId__Enum {
        namespace {
            inline app::PlatformId__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlatformId__Enum__Class** type_info = &type_info_ref;
        inline app::PlatformId__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformId__Enum__Class>(type_info, "", "PlatformId");
        }
        inline app::PlatformId__Enum* create() {
            return il2cpp::create_object<app::PlatformId__Enum>(get_class());
        }
    } // namespace PlatformId__Enum
} // namespace app::classes::types
