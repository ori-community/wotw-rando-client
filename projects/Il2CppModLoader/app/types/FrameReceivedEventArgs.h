#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameReceivedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameReceivedEventArgs__Class** type_info;
        inline app::FrameReceivedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::FrameReceivedEventArgs__Class>(type_info, "UnityEngine.Experimental.XR", "FrameReceivedEventArgs");
        }
        inline app::FrameReceivedEventArgs* create() {
            return il2cpp::create_object<app::FrameReceivedEventArgs>(get_class());
        }
        inline app::FrameReceivedEventArgs__Boxed* box(app::FrameReceivedEventArgs value) {
            return il2cpp::box_value<app::FrameReceivedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace FrameReceivedEventArgs
} // namespace app::classes::types
