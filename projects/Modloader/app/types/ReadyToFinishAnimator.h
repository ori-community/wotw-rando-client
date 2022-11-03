#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadyToFinishAnimator {
        inline app::ReadyToFinishAnimator__Class** type_info = (app::ReadyToFinishAnimator__Class**)(modloader::win::memory::resolve_rva(0x04795970));
        inline app::ReadyToFinishAnimator__Class* get_class() {
            return il2cpp::get_class<app::ReadyToFinishAnimator__Class>(type_info, "Moon.Timeline", "ReadyToFinishAnimator");
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
