#pragma once
#include <Modloader/app/structs/HitReactionSettings.h>
#include <Modloader/app/structs/HitReactionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReactionSettings {
        inline app::HitReactionSettings__Class** type_info() {
            static app::HitReactionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HitReactionSettings__Class**)(modloader::win::memory::resolve_rva(0x04740F90));
            }
            return cache;
        }
        inline app::HitReactionSettings__Class* get_class() {
            return il2cpp::get_class<app::HitReactionSettings__Class>(type_info(), "", "HitReactionSettings");
        }
        inline app::HitReactionSettings* create() {
            return il2cpp::create_object<app::HitReactionSettings>(get_class());
        }
    } // namespace HitReactionSettings
} // namespace app::classes::types
