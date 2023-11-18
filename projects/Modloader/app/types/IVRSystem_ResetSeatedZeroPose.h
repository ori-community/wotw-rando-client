#pragma once
#include <Modloader/app/structs/IVRSystem_ResetSeatedZeroPose.h>
#include <Modloader/app/structs/IVRSystem_ResetSeatedZeroPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_ResetSeatedZeroPose {
        inline app::IVRSystem_ResetSeatedZeroPose__Class** type_info() {
            static app::IVRSystem_ResetSeatedZeroPose__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_ResetSeatedZeroPose__Class**)(modloader::win::memory::resolve_rva(0x047955C0));
            }
            return cache;
        }
        inline app::IVRSystem_ResetSeatedZeroPose__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_ResetSeatedZeroPose__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_ResetSeatedZeroPose");
        }
        inline app::IVRSystem_ResetSeatedZeroPose* create() {
            return il2cpp::create_object<app::IVRSystem_ResetSeatedZeroPose>(get_class());
        }
    } // namespace IVRSystem_ResetSeatedZeroPose
} // namespace app::classes::types
