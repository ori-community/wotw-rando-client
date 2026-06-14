#pragma once
#include <Modloader/app/structs/IApproximateEvent.h>
#include <Modloader/app/structs/IApproximateEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IApproximateEvent {
        inline app::IApproximateEvent__Class** type_info() {
            static app::IApproximateEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IApproximateEvent__Class**)(modloader::win::memory::resolve_rva(0x04790F80));
            }
            return cache;
        }
        inline app::IApproximateEvent__Class* get_class() {
            return il2cpp::get_class<app::IApproximateEvent__Class>(type_info(), "Moon.Timeline", "IApproximateEvent");
        }
    } // namespace IApproximateEvent
} // namespace app::classes::types
