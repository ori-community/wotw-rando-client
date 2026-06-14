#pragma once
#include <Modloader/app/structs/DisableRendererWhenOutOfFrustrum.h>
#include <Modloader/app/structs/DisableRendererWhenOutOfFrustrum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisableRendererWhenOutOfFrustrum {
        inline app::DisableRendererWhenOutOfFrustrum__Class** type_info() {
            static app::DisableRendererWhenOutOfFrustrum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisableRendererWhenOutOfFrustrum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisableRendererWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::DisableRendererWhenOutOfFrustrum__Class>(type_info(), "", "DisableRendererWhenOutOfFrustrum");
        }
        inline app::DisableRendererWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::DisableRendererWhenOutOfFrustrum>(get_class());
        }
    } // namespace DisableRendererWhenOutOfFrustrum
} // namespace app::classes::types
