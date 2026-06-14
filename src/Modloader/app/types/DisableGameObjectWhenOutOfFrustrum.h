#pragma once
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum.h>
#include <Modloader/app/structs/DisableGameObjectWhenOutOfFrustrum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableGameObjectWhenOutOfFrustrum {
        inline app::DisableGameObjectWhenOutOfFrustrum__Class** type_info() {
            static app::DisableGameObjectWhenOutOfFrustrum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DisableGameObjectWhenOutOfFrustrum__Class**)(modloader::win::memory::resolve_rva(0x047427D8));
            }
            return cache;
        }
        inline app::DisableGameObjectWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::DisableGameObjectWhenOutOfFrustrum__Class>(type_info(), "", "DisableGameObjectWhenOutOfFrustrum");
        }
        inline app::DisableGameObjectWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::DisableGameObjectWhenOutOfFrustrum>(get_class());
        }
    } // namespace DisableGameObjectWhenOutOfFrustrum
} // namespace app::classes::types
