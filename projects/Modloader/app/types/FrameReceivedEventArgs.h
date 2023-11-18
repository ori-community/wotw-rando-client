#pragma once
#include <Modloader/app/structs/FrameReceivedEventArgs.h>
#include <Modloader/app/structs/FrameReceivedEventArgs__Boxed.h>
#include <Modloader/app/structs/FrameReceivedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameReceivedEventArgs {
        inline app::FrameReceivedEventArgs__Class** type_info() {
            static app::FrameReceivedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameReceivedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04720F70));
            }
            return cache;
        }
        inline app::FrameReceivedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::FrameReceivedEventArgs__Class>(type_info(), "UnityEngine.Experimental.XR", "FrameReceivedEventArgs");
        }
        inline app::FrameReceivedEventArgs* create() {
            return il2cpp::create_object<app::FrameReceivedEventArgs>(get_class());
        }
        inline app::FrameReceivedEventArgs__Boxed* box(app::FrameReceivedEventArgs value) {
            return il2cpp::box_value<app::FrameReceivedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace FrameReceivedEventArgs
} // namespace app::classes::types
