#pragma once
#include <Modloader/app/structs/IVRApplications.h>
#include <Modloader/app/structs/IVRApplications__Boxed.h>
#include <Modloader/app/structs/IVRApplications__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRApplications {
        inline app::IVRApplications__Class** type_info() {
            static app::IVRApplications__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRApplications__Class**)(modloader::win::memory::resolve_rva(0x047878D8));
            }
            return cache;
        }
        inline app::IVRApplications__Class* get_class() {
            return il2cpp::get_class<app::IVRApplications__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRApplications");
        }
        inline app::IVRApplications* create() {
            return il2cpp::create_object<app::IVRApplications>(get_class());
        }
        inline app::IVRApplications__Boxed* box(app::IVRApplications value) {
            return il2cpp::box_value<app::IVRApplications__Boxed>(get_class(), value);
        }
    } // namespace IVRApplications
} // namespace app::classes::types
