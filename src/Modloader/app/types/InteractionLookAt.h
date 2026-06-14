#pragma once
#include <Modloader/app/structs/InteractionLookAt.h>
#include <Modloader/app/structs/InteractionLookAt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionLookAt {
        inline app::InteractionLookAt__Class** type_info() {
            static app::InteractionLookAt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionLookAt__Class**)(modloader::win::memory::resolve_rva(0x04795960));
            }
            return cache;
        }
        inline app::InteractionLookAt__Class* get_class() {
            return il2cpp::get_class<app::InteractionLookAt__Class>(type_info(), "RootMotion.FinalIK", "InteractionLookAt");
        }
        inline app::InteractionLookAt* create() {
            return il2cpp::create_object<app::InteractionLookAt>(get_class());
        }
    } // namespace InteractionLookAt
} // namespace app::classes::types
