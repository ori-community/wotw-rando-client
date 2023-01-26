#pragma once
#include <Modloader/app/structs/CVRCompositor.h>
#include <Modloader/app/structs/CVRCompositor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRCompositor {
        inline app::CVRCompositor__Class** type_info() {
            static app::CVRCompositor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRCompositor__Class**)(modloader::win::memory::resolve_rva(0x0474B9F8));
            }
            return cache;
        }
        inline app::CVRCompositor__Class* get_class() {
            return il2cpp::get_class<app::CVRCompositor__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRCompositor");
        }
        inline app::CVRCompositor* create() {
            return il2cpp::create_object<app::CVRCompositor>(get_class());
        }
    } // namespace CVRCompositor
} // namespace app::classes::types
