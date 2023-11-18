#pragma once
#include <Modloader/app/structs/IVRExtendedDisplay.h>
#include <Modloader/app/structs/IVRExtendedDisplay__Boxed.h>
#include <Modloader/app/structs/IVRExtendedDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay {
        inline app::IVRExtendedDisplay__Class** type_info() {
            static app::IVRExtendedDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x0477A700));
            }
            return cache;
        }
        inline app::IVRExtendedDisplay__Class* get_class() {
            return il2cpp::get_class<app::IVRExtendedDisplay__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay");
        }
        inline app::IVRExtendedDisplay* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay>(get_class());
        }
        inline app::IVRExtendedDisplay__Boxed* box(app::IVRExtendedDisplay value) {
            return il2cpp::box_value<app::IVRExtendedDisplay__Boxed>(get_class(), value);
        }
    } // namespace IVRExtendedDisplay
} // namespace app::classes::types
