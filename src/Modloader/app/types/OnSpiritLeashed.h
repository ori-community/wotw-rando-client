#pragma once
#include <Modloader/app/structs/OnSpiritLeashed.h>
#include <Modloader/app/structs/OnSpiritLeashed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSpiritLeashed {
        inline app::OnSpiritLeashed__Class** type_info() {
            static app::OnSpiritLeashed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OnSpiritLeashed__Class**)(modloader::win::memory::resolve_rva(0x04725E18));
            }
            return cache;
        }
        inline app::OnSpiritLeashed__Class* get_class() {
            return il2cpp::get_class<app::OnSpiritLeashed__Class>(type_info(), "fsm.triggers", "OnSpiritLeashed");
        }
        inline app::OnSpiritLeashed* create() {
            return il2cpp::create_object<app::OnSpiritLeashed>(get_class());
        }
    } // namespace OnSpiritLeashed
} // namespace app::classes::types
