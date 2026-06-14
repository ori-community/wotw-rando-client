#pragma once
#include <Modloader/app/structs/SplineEventHandler.h>
#include <Modloader/app/structs/SplineEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplineEventHandler {
        inline app::SplineEventHandler__Class** type_info() {
            static app::SplineEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SplineEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471D868));
            }
            return cache;
        }
        inline app::SplineEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SplineEventHandler__Class>(type_info(), "", "SplineEventHandler");
        }
        inline app::SplineEventHandler* create() {
            return il2cpp::create_object<app::SplineEventHandler>(get_class());
        }
    } // namespace SplineEventHandler
} // namespace app::classes::types
