#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IApproximateEvent__Class.h>

namespace app::classes::types {
    namespace IApproximateEvent {
        inline app::IApproximateEvent__Class** type_info = (app::IApproximateEvent__Class**)(modloader::win::memory::resolve_rva(0x04790F80));
        inline app::IApproximateEvent__Class* get_class() {
            return il2cpp::get_class<app::IApproximateEvent__Class>(type_info, "Moon.Timeline", "IApproximateEvent");
        }
    } // namespace IApproximateEvent
} // namespace app::classes::types
