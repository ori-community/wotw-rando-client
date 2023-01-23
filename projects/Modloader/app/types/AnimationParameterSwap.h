#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationParameterSwap__Class.h>
#include <Modloader/app/structs/AnimationParameterSwap.h>

namespace app::classes::types {
    namespace AnimationParameterSwap {
        namespace {
            inline app::AnimationParameterSwap__Class* type_info_ref = nullptr;
        }
        inline app::AnimationParameterSwap__Class** type_info = &type_info_ref;
        inline app::AnimationParameterSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSwap__Class>(type_info, "", "AnimationParameterSwap");
        }
        inline app::AnimationParameterSwap* create() {
            return il2cpp::create_object<app::AnimationParameterSwap>(get_class());
        }
    } // namespace AnimationParameterSwap
} // namespace app::classes::types
