#pragma once
#include <Modloader/app/structs/CVRChaperone.h>
#include <Modloader/app/structs/CVRChaperone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRChaperone {
        inline app::CVRChaperone__Class** type_info() {
            static app::CVRChaperone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRChaperone__Class**)(modloader::win::memory::resolve_rva(0x047265B8));
            }
            return cache;
        }
        inline app::CVRChaperone__Class* get_class() {
            return il2cpp::get_class<app::CVRChaperone__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRChaperone");
        }
        inline app::CVRChaperone* create() {
            return il2cpp::create_object<app::CVRChaperone>(get_class());
        }
    } // namespace CVRChaperone
} // namespace app::classes::types
