#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Array__Class.h>
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Array.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupModifier__Array {
        inline app::AnimationPostprocessGroupModifier__Array__Class** type_info = (app::AnimationPostprocessGroupModifier__Array__Class**)(modloader::win::memory::resolve_rva(0x04752180));
        inline app::AnimationPostprocessGroupModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupModifier__Array__Class>(type_info, "Moon", "AnimationPostprocessGroupModifier[]");
        }
        inline app::AnimationPostprocessGroupModifier__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupModifier__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroupModifier__Array
} // namespace app::classes::types
