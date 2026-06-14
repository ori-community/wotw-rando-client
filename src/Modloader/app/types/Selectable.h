#pragma once
#include <Modloader/app/structs/Selectable.h>
#include <Modloader/app/structs/Selectable__Array.h>
#include <Modloader/app/structs/Selectable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Selectable {
        inline app::Selectable__Class** type_info() {
            static app::Selectable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Selectable__Class**)(modloader::win::memory::resolve_rva(0x04771388));
            }
            return cache;
        }
        inline app::Selectable__Class* get_class() {
            return il2cpp::get_class<app::Selectable__Class>(type_info(), "UnityEngine.UI", "Selectable");
        }
        inline app::Selectable* create() {
            return il2cpp::create_object<app::Selectable>(get_class());
        }
        inline app::Selectable__Array* create_array(int size) {
            return il2cpp::array_new<app::Selectable__Array>(get_class(), size);
        }
        inline app::Selectable__Array* create_array(const std::vector<app::Selectable*>& items) {
            return il2cpp::array_new<app::Selectable__Array>(get_class(), items);
        }
    } // namespace Selectable
} // namespace app::classes::types
