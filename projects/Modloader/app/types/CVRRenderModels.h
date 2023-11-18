#pragma once
#include <Modloader/app/structs/CVRRenderModels.h>
#include <Modloader/app/structs/CVRRenderModels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRRenderModels {
        inline app::CVRRenderModels__Class** type_info() {
            static app::CVRRenderModels__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRRenderModels__Class**)(modloader::win::memory::resolve_rva(0x04734F80));
            }
            return cache;
        }
        inline app::CVRRenderModels__Class* get_class() {
            return il2cpp::get_class<app::CVRRenderModels__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels");
        }
        inline app::CVRRenderModels* create() {
            return il2cpp::create_object<app::CVRRenderModels>(get_class());
        }
    } // namespace CVRRenderModels
} // namespace app::classes::types
