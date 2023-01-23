#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatTween_FloatTweenCallback__Class.h>
#include <Modloader/app/structs/FloatTween_FloatTweenCallback.h>

namespace app::classes::types {
    namespace FloatTween_FloatTweenCallback {
        inline app::FloatTween_FloatTweenCallback__Class** type_info = (app::FloatTween_FloatTweenCallback__Class**)(modloader::win::memory::resolve_rva(0x04764DE0));
        inline app::FloatTween_FloatTweenCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatTween_FloatTweenCallback__Class>(type_info, "UnityEngine.UI.CoroutineTween", "FloatTween", "FloatTweenCallback");
        }
        inline app::FloatTween_FloatTweenCallback* create() {
            return il2cpp::create_object<app::FloatTween_FloatTweenCallback>(get_class());
        }
    } // namespace FloatTween_FloatTweenCallback
} // namespace app::classes::types
