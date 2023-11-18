#pragma once
#include <Modloader/app/structs/CameraFovOffsetMixer.h>
#include <Modloader/app/structs/CameraFovOffsetMixer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFovOffsetMixer {
        inline app::CameraFovOffsetMixer__Class** type_info() {
            static app::CameraFovOffsetMixer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFovOffsetMixer__Class**)(modloader::win::memory::resolve_rva(0x04757060));
            }
            return cache;
        }
        inline app::CameraFovOffsetMixer__Class* get_class() {
            return il2cpp::get_class<app::CameraFovOffsetMixer__Class>(type_info(), "", "CameraFovOffsetMixer");
        }
        inline app::CameraFovOffsetMixer* create() {
            return il2cpp::create_object<app::CameraFovOffsetMixer>(get_class());
        }
    } // namespace CameraFovOffsetMixer
} // namespace app::classes::types
