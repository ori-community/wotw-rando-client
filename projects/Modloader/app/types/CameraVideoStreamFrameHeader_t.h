#pragma once
#include <Modloader/app/structs/CameraVideoStreamFrameHeader_t.h>
#include <Modloader/app/structs/CameraVideoStreamFrameHeader_t__Boxed.h>
#include <Modloader/app/structs/CameraVideoStreamFrameHeader_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraVideoStreamFrameHeader_t {
        inline app::CameraVideoStreamFrameHeader_t__Class** type_info() {
            static app::CameraVideoStreamFrameHeader_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraVideoStreamFrameHeader_t__Class**)(modloader::win::memory::resolve_rva(0x0473F730));
            }
            return cache;
        }
        inline app::CameraVideoStreamFrameHeader_t__Class* get_class() {
            return il2cpp::get_class<app::CameraVideoStreamFrameHeader_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "CameraVideoStreamFrameHeader_t");
        }
        inline app::CameraVideoStreamFrameHeader_t* create() {
            return il2cpp::create_object<app::CameraVideoStreamFrameHeader_t>(get_class());
        }
        inline app::CameraVideoStreamFrameHeader_t__Boxed* box(app::CameraVideoStreamFrameHeader_t value) {
            return il2cpp::box_value<app::CameraVideoStreamFrameHeader_t__Boxed>(get_class(), value);
        }
    } // namespace CameraVideoStreamFrameHeader_t
} // namespace app::classes::types
