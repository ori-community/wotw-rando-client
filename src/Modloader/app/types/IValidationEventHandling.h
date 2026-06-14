#pragma once
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/IValidationEventHandling__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IValidationEventHandling {
        inline app::IValidationEventHandling__Class** type_info() {
            static app::IValidationEventHandling__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IValidationEventHandling__Class**)(modloader::win::memory::resolve_rva(0x04750518));
            }
            return cache;
        }
        inline app::IValidationEventHandling__Class* get_class() {
            return il2cpp::get_class<app::IValidationEventHandling__Class>(type_info(), "System.Xml", "IValidationEventHandling");
        }
    } // namespace IValidationEventHandling
} // namespace app::classes::types
