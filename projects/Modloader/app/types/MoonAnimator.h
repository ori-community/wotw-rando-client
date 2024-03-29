#pragma once
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator__Array.h>
#include <Modloader/app/structs/MoonAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator {
        inline app::MoonAnimator__Class** type_info() {
            static app::MoonAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimator__Class**)(modloader::win::memory::resolve_rva(0x04734798));
            }
            return cache;
        }
        inline app::MoonAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator__Class>(type_info(), "Moon", "MoonAnimator");
        }
        inline app::MoonAnimator* create() {
            return il2cpp::create_object<app::MoonAnimator>(get_class());
        }
        inline app::MoonAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonAnimator__Array>(get_class(), size);
        }
        inline app::MoonAnimator__Array* create_array(const std::vector<app::MoonAnimator*>& items) {
            return il2cpp::array_new<app::MoonAnimator__Array>(get_class(), items);
        }
    } // namespace MoonAnimator
} // namespace app::classes::types
