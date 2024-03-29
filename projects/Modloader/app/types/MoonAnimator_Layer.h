#pragma once
#include <Modloader/app/structs/MoonAnimator_Layer.h>
#include <Modloader/app/structs/MoonAnimator_Layer__Array.h>
#include <Modloader/app/structs/MoonAnimator_Layer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_Layer {
        inline app::MoonAnimator_Layer__Class** type_info() {
            static app::MoonAnimator_Layer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator_Layer__Class**)(modloader::win::memory::resolve_rva(0x04711F90));
            }
            return cache;
        }
        inline app::MoonAnimator_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_Layer__Class>(type_info(), "Moon", "MoonAnimator", "Layer");
        }
        inline app::MoonAnimator_Layer* create() {
            return il2cpp::create_object<app::MoonAnimator_Layer>(get_class());
        }
        inline app::MoonAnimator_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator_Layer__Array>(get_class(), size);
        }
        inline app::MoonAnimator_Layer__Array* create_array(const std::vector<app::MoonAnimator_Layer*>& items) {
            return il2cpp::array_new<app::MoonAnimator_Layer__Array>(get_class(), items);
        }
    } // namespace MoonAnimator_Layer
} // namespace app::classes::types
