#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IHitStopReceiver__Class.h>

namespace app::classes::types {
    namespace IHitStopReceiver {
        inline app::IHitStopReceiver__Class** type_info = (app::IHitStopReceiver__Class**)(modloader::win::memory::resolve_rva(0x0477EBF8));
        inline app::IHitStopReceiver__Class* get_class() {
            return il2cpp::get_class<app::IHitStopReceiver__Class>(type_info, "Moon", "IHitStopReceiver");
        }
    } // namespace IHitStopReceiver
} // namespace app::classes::types
