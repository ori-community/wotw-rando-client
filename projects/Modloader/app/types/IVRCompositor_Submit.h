#pragma once
#include <Modloader/app/structs/IVRCompositor_Submit.h>
#include <Modloader/app/structs/IVRCompositor_Submit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_Submit {
        inline app::IVRCompositor_Submit__Class** type_info() {
            static app::IVRCompositor_Submit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRCompositor_Submit__Class**)(modloader::win::memory::resolve_rva(0x04760750));
            }
            return cache;
        }
        inline app::IVRCompositor_Submit__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_Submit__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_Submit");
        }
        inline app::IVRCompositor_Submit* create() {
            return il2cpp::create_object<app::IVRCompositor_Submit>(get_class());
        }
    } // namespace IVRCompositor_Submit
} // namespace app::classes::types
