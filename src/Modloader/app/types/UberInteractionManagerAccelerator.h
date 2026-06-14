#pragma once
#include <Modloader/app/structs/UberInteractionManagerAccelerator.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator {
        inline app::UberInteractionManagerAccelerator__Class** type_info() {
            static app::UberInteractionManagerAccelerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManagerAccelerator__Class**)(modloader::win::memory::resolve_rva(0x047793B8));
            }
            return cache;
        }
        inline app::UberInteractionManagerAccelerator__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator__Class>(type_info(), "", "UberInteractionManagerAccelerator");
        }
        inline app::UberInteractionManagerAccelerator* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator
} // namespace app::classes::types
