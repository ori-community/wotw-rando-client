#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationCurve__Array {
        inline app::AnimationCurve__Array__Class** type_info = (app::AnimationCurve__Array__Class**)(modloader::win::memory::resolve_rva(0x047601D0));
        inline app::AnimationCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationCurve__Array__Class>(type_info, "UnityEngine", "AnimationCurve[]");
        }
        inline app::AnimationCurve__Array* create() {
            return il2cpp::create_object<app::AnimationCurve__Array>(get_class());
        }
    } // namespace AnimationCurve__Array
} // namespace app::classes::types
