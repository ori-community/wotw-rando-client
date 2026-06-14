#pragma once
#include <Modloader/app/structs/CVRScreenshots.h>
#include <Modloader/app/structs/CVRScreenshots__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CVRScreenshots {
        inline app::CVRScreenshots__Class** type_info() {
            static app::CVRScreenshots__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CVRScreenshots__Class**)(modloader::win::memory::resolve_rva(0x0472CB50));
            }
            return cache;
        }
        inline app::CVRScreenshots__Class* get_class() {
            return il2cpp::get_class<app::CVRScreenshots__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CVRScreenshots");
        }
        inline app::CVRScreenshots* create() {
            return il2cpp::create_object<app::CVRScreenshots>(get_class());
        }
    } // namespace CVRScreenshots
} // namespace app::classes::types
