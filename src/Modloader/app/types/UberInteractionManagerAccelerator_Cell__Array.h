#pragma once
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell__Array.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_Cell__Array {
        inline app::UberInteractionManagerAccelerator_Cell__Array__Class** type_info() {
            static app::UberInteractionManagerAccelerator_Cell__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManagerAccelerator_Cell__Array__Class**)(modloader::win::memory::resolve_rva(0x04750900));
            }
            return cache;
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator_Cell__Array__Class>(type_info(), "", "UberInteractionManagerAccelerator+Cell[]");
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_Cell__Array>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator_Cell__Array
} // namespace app::classes::types
