#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationListSwap__Class.h>
#include <Modloader/app/structs/AnimationListSwap.h>

namespace app::classes::types {
    namespace AnimationListSwap {
        namespace {
            inline app::AnimationListSwap__Class* type_info_ref = nullptr;
        }
        inline app::AnimationListSwap__Class** type_info = &type_info_ref;
        inline app::AnimationListSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationListSwap__Class>(type_info, "", "AnimationListSwap");
        }
        inline app::AnimationListSwap* create() {
            return il2cpp::create_object<app::AnimationListSwap>(get_class());
        }
    } // namespace AnimationListSwap
} // namespace app::classes::types
