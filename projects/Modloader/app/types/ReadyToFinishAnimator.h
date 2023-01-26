#pragma once
#include <Modloader/app/structs/ReadyToFinishAnimator.h>
#include <Modloader/app/structs/ReadyToFinishAnimator__Array.h>
#include <Modloader/app/structs/ReadyToFinishAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadyToFinishAnimator {
        inline app::ReadyToFinishAnimator__Class** type_info() {
            static app::ReadyToFinishAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReadyToFinishAnimator__Class**)(modloader::win::memory::resolve_rva(0x04795970));
            }
            return cache;
        }
        inline app::ReadyToFinishAnimator__Class* get_class() {
            return il2cpp::get_class<app::ReadyToFinishAnimator__Class>(type_info(), "Moon.Timeline", "ReadyToFinishAnimator");
        }
        inline app::ReadyToFinishAnimator* create() {
            return il2cpp::create_object<app::ReadyToFinishAnimator>(get_class());
        }
        inline app::ReadyToFinishAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadyToFinishAnimator__Array>(get_class(), size);
        }
        inline app::ReadyToFinishAnimator__Array* create_array(const std::vector<app::ReadyToFinishAnimator*>& items) {
            return il2cpp::array_new<app::ReadyToFinishAnimator__Array>(get_class(), items);
        }
    } // namespace ReadyToFinishAnimator
} // namespace app::classes::types
