#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorTween_ColorTweenCallback {
        inline app::ColorTween_ColorTweenCallback__Class** type_info = (app::ColorTween_ColorTweenCallback__Class**)(modloader::win::memory::resolve_rva(0x0470C900));
        inline app::ColorTween_ColorTweenCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorTween_ColorTweenCallback__Class>(type_info, "UnityEngine.UI.CoroutineTween", "ColorTween", "ColorTweenCallback");
        }
        inline app::ColorTween_ColorTweenCallback* create() {
            return il2cpp::create_object<app::ColorTween_ColorTweenCallback>(get_class());
        }
    } // namespace ColorTween_ColorTweenCallback
} // namespace app::classes::types
