#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberTypeTracker__Class.h>
#include <Modloader/app/structs/UberTypeTracker.h>

namespace app::classes::types {
    namespace UberTypeTracker {
        inline app::UberTypeTracker__Class** type_info = (app::UberTypeTracker__Class**)(modloader::win::memory::resolve_rva(0x047090C0));
        inline app::UberTypeTracker__Class* get_class() {
            return il2cpp::get_class<app::UberTypeTracker__Class>(type_info, "", "UberTypeTracker");
        }
        inline app::UberTypeTracker* create() {
            return il2cpp::create_object<app::UberTypeTracker>(get_class());
        }
    } // namespace UberTypeTracker
} // namespace app::classes::types
