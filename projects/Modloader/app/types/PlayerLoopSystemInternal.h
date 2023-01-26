#pragma once
#include <Modloader/app/structs/PlayerLoopSystemInternal.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Boxed.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystemInternal {
        inline app::PlayerLoopSystemInternal__Class** type_info() {
            static app::PlayerLoopSystemInternal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLoopSystemInternal__Class**)(modloader::win::memory::resolve_rva(0x04783210));
            }
            return cache;
        }
        inline app::PlayerLoopSystemInternal__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystemInternal__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoopSystemInternal");
        }
        inline app::PlayerLoopSystemInternal* create() {
            return il2cpp::create_object<app::PlayerLoopSystemInternal>(get_class());
        }
        inline app::PlayerLoopSystemInternal__Boxed* box(app::PlayerLoopSystemInternal value) {
            return il2cpp::box_value<app::PlayerLoopSystemInternal__Boxed>(get_class(), value);
        }
        inline app::PlayerLoopSystemInternal__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLoopSystemInternal__Array>(get_class(), size);
        }
        inline app::PlayerLoopSystemInternal__Array* create_array(const std::vector<app::PlayerLoopSystemInternal>& items) {
            return il2cpp::array_new<app::PlayerLoopSystemInternal__Array>(get_class(), items);
        }
    } // namespace PlayerLoopSystemInternal
} // namespace app::classes::types
