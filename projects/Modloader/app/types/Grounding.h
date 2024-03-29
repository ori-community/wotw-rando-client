#pragma once
#include <Modloader/app/structs/Grounding.h>
#include <Modloader/app/structs/Grounding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grounding {
        inline app::Grounding__Class** type_info() {
            static app::Grounding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Grounding__Class**)(modloader::win::memory::resolve_rva(0x04713220));
            }
            return cache;
        }
        inline app::Grounding__Class* get_class() {
            return il2cpp::get_class<app::Grounding__Class>(type_info(), "RootMotion.FinalIK", "Grounding");
        }
        inline app::Grounding* create() {
            return il2cpp::create_object<app::Grounding>(get_class());
        }
    } // namespace Grounding
} // namespace app::classes::types
