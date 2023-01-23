#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GlobalLog__Class.h>
#include <Modloader/app/structs/GlobalLog.h>

namespace app::classes::types {
    namespace GlobalLog {
        inline app::GlobalLog__Class** type_info = (app::GlobalLog__Class**)(modloader::win::memory::resolve_rva(0x0476C8A8));
        inline app::GlobalLog__Class* get_class() {
            return il2cpp::get_class<app::GlobalLog__Class>(type_info, "System.Net", "GlobalLog");
        }
        inline app::GlobalLog* create() {
            return il2cpp::create_object<app::GlobalLog>(get_class());
        }
    } // namespace GlobalLog
} // namespace app::classes::types
