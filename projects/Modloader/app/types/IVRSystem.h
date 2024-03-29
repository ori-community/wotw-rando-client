#pragma once
#include <Modloader/app/structs/IVRSystem.h>
#include <Modloader/app/structs/IVRSystem__Boxed.h>
#include <Modloader/app/structs/IVRSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem {
        inline app::IVRSystem__Class** type_info() {
            static app::IVRSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem__Class**)(modloader::win::memory::resolve_rva(0x04739C28));
            }
            return cache;
        }
        inline app::IVRSystem__Class* get_class() {
            return il2cpp::get_class<app::IVRSystem__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem");
        }
        inline app::IVRSystem* create() {
            return il2cpp::create_object<app::IVRSystem>(get_class());
        }
        inline app::IVRSystem__Boxed* box(app::IVRSystem value) {
            return il2cpp::box_value<app::IVRSystem__Boxed>(get_class(), value);
        }
    } // namespace IVRSystem
} // namespace app::classes::types
