#pragma once
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Boxed.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveAnimationHandle {
        inline app::ActiveAnimationHandle__Class** type_info() {
            static app::ActiveAnimationHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActiveAnimationHandle__Class**)(modloader::win::memory::resolve_rva(0x04793938));
            }
            return cache;
        }
        inline app::ActiveAnimationHandle__Class* get_class() {
            return il2cpp::get_class<app::ActiveAnimationHandle__Class>(type_info(), "Moon", "ActiveAnimationHandle");
        }
        inline app::ActiveAnimationHandle* create() {
            return il2cpp::create_object<app::ActiveAnimationHandle>(get_class());
        }
        inline app::ActiveAnimationHandle__Boxed* box(app::ActiveAnimationHandle value) {
            return il2cpp::box_value<app::ActiveAnimationHandle__Boxed>(get_class(), value);
        }
        inline app::ActiveAnimationHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::ActiveAnimationHandle__Array>(get_class(), size);
        }
        inline app::ActiveAnimationHandle__Array* create_array(const std::vector<app::ActiveAnimationHandle>& items) {
            return il2cpp::array_new<app::ActiveAnimationHandle__Array>(get_class(), items);
        }
    } // namespace ActiveAnimationHandle
} // namespace app::classes::types
