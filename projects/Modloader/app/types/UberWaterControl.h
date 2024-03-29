#pragma once
#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/UberWaterControl__Array.h>
#include <Modloader/app/structs/UberWaterControl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl {
        inline app::UberWaterControl__Class** type_info() {
            static app::UberWaterControl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterControl__Class**)(modloader::win::memory::resolve_rva(0x04749768));
            }
            return cache;
        }
        inline app::UberWaterControl__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl__Class>(type_info(), "", "UberWaterControl");
        }
        inline app::UberWaterControl* create() {
            return il2cpp::create_object<app::UberWaterControl>(get_class());
        }
        inline app::UberWaterControl__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterControl__Array>(get_class(), size);
        }
        inline app::UberWaterControl__Array* create_array(const std::vector<app::UberWaterControl*>& items) {
            return il2cpp::array_new<app::UberWaterControl__Array>(get_class(), items);
        }
    } // namespace UberWaterControl
} // namespace app::classes::types
