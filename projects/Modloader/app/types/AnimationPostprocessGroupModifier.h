#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Class.h>
#include <Modloader/app/structs/AnimationPostprocessGroupModifier.h>
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Array.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupModifier {
        namespace {
            inline app::AnimationPostprocessGroupModifier__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPostprocessGroupModifier__Class** type_info = &type_info_ref;
        inline app::AnimationPostprocessGroupModifier__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupModifier__Class>(type_info, "Moon", "AnimationPostprocessGroupModifier");
        }
        inline app::AnimationPostprocessGroupModifier* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupModifier>(get_class());
        }
        inline app::AnimationPostprocessGroupModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPostprocessGroupModifier__Array>(get_class(), size);
        }
        inline app::AnimationPostprocessGroupModifier__Array* create_array(const std::vector<app::AnimationPostprocessGroupModifier*>& items) {
            return il2cpp::array_new<app::AnimationPostprocessGroupModifier__Array>(get_class(), items);
        }
    } // namespace AnimationPostprocessGroupModifier
} // namespace app::classes::types
