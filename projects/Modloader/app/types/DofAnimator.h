#pragma once
#include <Modloader/app/structs/DofAnimator.h>
#include <Modloader/app/structs/DofAnimator__Array.h>
#include <Modloader/app/structs/DofAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DofAnimator {
        inline app::DofAnimator__Class** type_info() {
            static app::DofAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DofAnimator__Class**)(modloader::win::memory::resolve_rva(0x04743EC8));
            }
            return cache;
        }
        inline app::DofAnimator__Class* get_class() {
            return il2cpp::get_class<app::DofAnimator__Class>(type_info(), "", "DofAnimator");
        }
        inline app::DofAnimator* create() {
            return il2cpp::create_object<app::DofAnimator>(get_class());
        }
        inline app::DofAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::DofAnimator__Array>(get_class(), size);
        }
        inline app::DofAnimator__Array* create_array(const std::vector<app::DofAnimator*>& items) {
            return il2cpp::array_new<app::DofAnimator__Array>(get_class(), items);
        }
    } // namespace DofAnimator
} // namespace app::classes::types
