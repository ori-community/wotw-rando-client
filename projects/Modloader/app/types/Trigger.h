#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Trigger__Class.h>
#include <Modloader/app/structs/Trigger.h>

namespace app::classes::types {
    namespace Trigger {
        inline app::Trigger__Class** type_info = (app::Trigger__Class**)(modloader::win::memory::resolve_rva(0x047267B8));
        inline app::Trigger__Class* get_class() {
            return il2cpp::get_class<app::Trigger__Class>(type_info, "AK.Wwise", "Trigger");
        }
        inline app::Trigger* create() {
            return il2cpp::create_object<app::Trigger>(get_class());
        }
    } // namespace Trigger
} // namespace app::classes::types
