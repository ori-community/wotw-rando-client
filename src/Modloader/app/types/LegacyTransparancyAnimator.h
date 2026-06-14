#pragma once
#include <Modloader/app/structs/LegacyTransparancyAnimator.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator__Array.h>
#include <Modloader/app/structs/LegacyTransparancyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparancyAnimator {
        inline app::LegacyTransparancyAnimator__Class** type_info() {
            static app::LegacyTransparancyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyTransparancyAnimator__Class**)(modloader::win::memory::resolve_rva(0x04737D58));
            }
            return cache;
        }
        inline app::LegacyTransparancyAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparancyAnimator__Class>(type_info(), "", "LegacyTransparancyAnimator");
        }
        inline app::LegacyTransparancyAnimator* create() {
            return il2cpp::create_object<app::LegacyTransparancyAnimator>(get_class());
        }
        inline app::LegacyTransparancyAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTransparancyAnimator__Array>(get_class(), size);
        }
        inline app::LegacyTransparancyAnimator__Array* create_array(const std::vector<app::LegacyTransparancyAnimator*>& items) {
            return il2cpp::array_new<app::LegacyTransparancyAnimator__Array>(get_class(), items);
        }
    } // namespace LegacyTransparancyAnimator
} // namespace app::classes::types
