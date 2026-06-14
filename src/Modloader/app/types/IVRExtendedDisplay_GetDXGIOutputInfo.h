#pragma once
#include <Modloader/app/structs/IVRExtendedDisplay_GetDXGIOutputInfo.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetDXGIOutputInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRExtendedDisplay_GetDXGIOutputInfo {
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo__Class** type_info() {
            static app::IVRExtendedDisplay_GetDXGIOutputInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRExtendedDisplay_GetDXGIOutputInfo__Class**)(modloader::win::memory::resolve_rva(0x047208F8));
            }
            return cache;
        }
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRExtendedDisplay_GetDXGIOutputInfo__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRExtendedDisplay", "_GetDXGIOutputInfo");
        }
        inline app::IVRExtendedDisplay_GetDXGIOutputInfo* create() {
            return il2cpp::create_object<app::IVRExtendedDisplay_GetDXGIOutputInfo>(get_class());
        }
    } // namespace IVRExtendedDisplay_GetDXGIOutputInfo
} // namespace app::classes::types
