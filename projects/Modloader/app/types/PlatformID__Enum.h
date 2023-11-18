#pragma once
#include <Modloader/app/structs/PlatformID__Enum.h>
#include <Modloader/app/structs/PlatformID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformID__Enum {
        inline app::PlatformID__Enum__Class** type_info() {
            static app::PlatformID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformID__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734B68));
            }
            return cache;
        }
        inline app::PlatformID__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformID__Enum__Class>(type_info(), "System", "PlatformID");
        }
        inline app::PlatformID__Enum* create() {
            return il2cpp::create_object<app::PlatformID__Enum>(get_class());
        }
    } // namespace PlatformID__Enum
} // namespace app::classes::types
#pragma once
#include <Modloader/app/structs/PlatformId__Enum.h>
#include <Modloader/app/structs/PlatformId__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformId__Enum {
        inline app::PlatformId__Enum__Class** type_info() {
            static app::PlatformId__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformId__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformId__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlatformId__Enum__Class>(type_info(), "", "PlatformId");
        }
        inline app::PlatformId__Enum* create() {
            return il2cpp::create_object<app::PlatformId__Enum>(get_class());
        }
    } // namespace PlatformId__Enum
} // namespace app::classes::types
