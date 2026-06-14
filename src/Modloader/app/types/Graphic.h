#pragma once
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Graphic__Array.h>
#include <Modloader/app/structs/Graphic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Graphic {
        inline app::Graphic__Class** type_info() {
            static app::Graphic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Graphic__Class**)(modloader::win::memory::resolve_rva(0x04721918));
            }
            return cache;
        }
        inline app::Graphic__Class* get_class() {
            return il2cpp::get_class<app::Graphic__Class>(type_info(), "UnityEngine.UI", "Graphic");
        }
        inline app::Graphic* create() {
            return il2cpp::create_object<app::Graphic>(get_class());
        }
        inline app::Graphic__Array* create_array(int size) {
            return il2cpp::array_new<app::Graphic__Array>(get_class(), size);
        }
        inline app::Graphic__Array* create_array(const std::vector<app::Graphic*>& items) {
            return il2cpp::array_new<app::Graphic__Array>(get_class(), items);
        }
    } // namespace Graphic
} // namespace app::classes::types
