#pragma once
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/BaseAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseAnimator {
        inline app::BaseAnimator__Class** type_info() {
            static app::BaseAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseAnimator__Class**)(modloader::win::memory::resolve_rva(0x04757058));
            }
            return cache;
        }
        inline app::BaseAnimator__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimator__Class>(type_info(), "", "BaseAnimator");
        }
        inline app::BaseAnimator* create() {
            return il2cpp::create_object<app::BaseAnimator>(get_class());
        }
        inline app::BaseAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseAnimator__Array>(get_class(), size);
        }
        inline app::BaseAnimator__Array* create_array(const std::vector<app::BaseAnimator*>& items) {
            return il2cpp::array_new<app::BaseAnimator__Array>(get_class(), items);
        }
    } // namespace BaseAnimator
} // namespace app::classes::types
