#pragma once
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell__Array.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_Cell {
        inline app::UberInteractionManagerAccelerator_Cell__Class** type_info() {
            static app::UberInteractionManagerAccelerator_Cell__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionManagerAccelerator_Cell__Class**)(modloader::win::memory::resolve_rva(0x0475E0D0));
            }
            return cache;
        }
        inline app::UberInteractionManagerAccelerator_Cell__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManagerAccelerator_Cell__Class>(type_info(), "", "UberInteractionManagerAccelerator", "Cell");
        }
        inline app::UberInteractionManagerAccelerator_Cell* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_Cell>(get_class());
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManagerAccelerator_Cell__Array>(get_class(), size);
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array* create_array(const std::vector<app::UberInteractionManagerAccelerator_Cell*>& items) {
            return il2cpp::array_new<app::UberInteractionManagerAccelerator_Cell__Array>(get_class(), items);
        }
    } // namespace UberInteractionManagerAccelerator_Cell
} // namespace app::classes::types
