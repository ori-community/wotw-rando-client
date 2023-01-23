#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationSwapSet__Class.h>
#include <Modloader/app/structs/AnimationSwapSet.h>

namespace app::classes::types {
    namespace AnimationSwapSet {
        namespace {
            inline app::AnimationSwapSet__Class* type_info_ref = nullptr;
        }
        inline app::AnimationSwapSet__Class** type_info = &type_info_ref;
        inline app::AnimationSwapSet__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwapSet__Class>(type_info, "", "AnimationSwapSet");
        }
        inline app::AnimationSwapSet* create() {
            return il2cpp::create_object<app::AnimationSwapSet>(get_class());
        }
    } // namespace AnimationSwapSet
} // namespace app::classes::types
