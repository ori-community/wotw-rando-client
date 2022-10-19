#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraVideoStreamFrameHeader_t {
        inline app::CameraVideoStreamFrameHeader_t__Class** type_info = (app::CameraVideoStreamFrameHeader_t__Class**)(modloader::win::memory::resolve_rva(0x0473F730));
        inline app::CameraVideoStreamFrameHeader_t__Class* get_class() {
            return il2cpp::get_class<app::CameraVideoStreamFrameHeader_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CameraVideoStreamFrameHeader_t");
        }
        inline app::CameraVideoStreamFrameHeader_t* create() {
            return il2cpp::create_object<app::CameraVideoStreamFrameHeader_t>(get_class());
        }
        inline app::CameraVideoStreamFrameHeader_t__Boxed* box(app::CameraVideoStreamFrameHeader_t value) {
            return il2cpp::box_value<app::CameraVideoStreamFrameHeader_t__Boxed>(get_class(), value);
        }
    } // namespace CameraVideoStreamFrameHeader_t
} // namespace app::classes::types
