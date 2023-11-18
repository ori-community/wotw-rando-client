#pragma once
#include <Modloader/app/structs/IAxisInput.h>
#include <Modloader/app/structs/IAxisInput__Array.h>
#include <Modloader/app/structs/IAxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAxisInput {
        inline app::IAxisInput__Class** type_info() {
            static app::IAxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAxisInput__Class**)(modloader::win::memory::resolve_rva(0x04732708));
            }
            return cache;
        }
        inline app::IAxisInput__Class* get_class() {
            return il2cpp::get_class<app::IAxisInput__Class>(type_info(), "SmartInput", "IAxisInput");
        }
        inline app::IAxisInput__Array* create_array(int size) {
            return il2cpp::array_new<app::IAxisInput__Array>(get_class(), size);
        }
        inline app::IAxisInput__Array* create_array(const std::vector<app::IAxisInput*>& items) {
            return il2cpp::array_new<app::IAxisInput__Array>(get_class(), items);
        }
    } // namespace IAxisInput
} // namespace app::classes::types
