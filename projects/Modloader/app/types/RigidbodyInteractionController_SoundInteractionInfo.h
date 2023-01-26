#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionInfo.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionInfo__Boxed.h>
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController_SoundInteractionInfo {
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Class** type_info() {
            static app::RigidbodyInteractionController_SoundInteractionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RigidbodyInteractionController_SoundInteractionInfo__Class**)(modloader::win::memory::resolve_rva(0x04793C68));
            }
            return cache;
        }
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyInteractionController_SoundInteractionInfo__Class>(type_info(), "", "RigidbodyInteractionController", "SoundInteractionInfo");
        }
        inline app::RigidbodyInteractionController_SoundInteractionInfo* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController_SoundInteractionInfo>(get_class());
        }
        inline app::RigidbodyInteractionController_SoundInteractionInfo__Boxed* box(app::RigidbodyInteractionController_SoundInteractionInfo value) {
            return il2cpp::box_value<app::RigidbodyInteractionController_SoundInteractionInfo__Boxed>(get_class(), value);
        }
    } // namespace RigidbodyInteractionController_SoundInteractionInfo
} // namespace app::classes::types
