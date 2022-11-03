#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableRendererWhenOutOfFrustrum {
        namespace {
            inline app::DisableRendererWhenOutOfFrustrum__Class* type_info_ref = nullptr;
        }
        inline app::DisableRendererWhenOutOfFrustrum__Class** type_info = &type_info_ref;
        inline app::DisableRendererWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::DisableRendererWhenOutOfFrustrum__Class>(type_info, "", "DisableRendererWhenOutOfFrustrum");
        }
        inline app::DisableRendererWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::DisableRendererWhenOutOfFrustrum>(get_class());
        }
    } // namespace DisableRendererWhenOutOfFrustrum
} // namespace app::classes::types
