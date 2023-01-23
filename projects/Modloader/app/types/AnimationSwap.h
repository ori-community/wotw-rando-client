#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationSwap__Class.h>
#include <Modloader/app/structs/AnimationSwap.h>

namespace app::classes::types {
    namespace AnimationSwap {
        namespace {
            inline app::AnimationSwap__Class* type_info_ref = nullptr;
        }
        inline app::AnimationSwap__Class** type_info = &type_info_ref;
        inline app::AnimationSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationSwap__Class>(type_info, "", "AnimationSwap");
        }
        inline app::AnimationSwap* create() {
            return il2cpp::create_object<app::AnimationSwap>(get_class());
        }
    } // namespace AnimationSwap
} // namespace app::classes::types
