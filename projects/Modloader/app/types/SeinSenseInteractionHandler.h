#pragma once
#include <Modloader/app/structs/SeinSenseInteractionHandler.h>
#include <Modloader/app/structs/SeinSenseInteractionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSenseInteractionHandler {
        inline app::SeinSenseInteractionHandler__Class** type_info() {
            static app::SeinSenseInteractionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSenseInteractionHandler__Class**)(modloader::win::memory::resolve_rva(0x04763A68));
            }
            return cache;
        }
        inline app::SeinSenseInteractionHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinSenseInteractionHandler__Class>(type_info(), "", "SeinSenseInteractionHandler");
        }
        inline app::SeinSenseInteractionHandler* create() {
            return il2cpp::create_object<app::SeinSenseInteractionHandler>(get_class());
        }
    } // namespace SeinSenseInteractionHandler
} // namespace app::classes::types
