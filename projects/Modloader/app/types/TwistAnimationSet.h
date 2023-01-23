#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TwistAnimationSet__Class.h>
#include <Modloader/app/structs/TwistAnimationSet.h>

namespace app::classes::types {
    namespace TwistAnimationSet {
        namespace {
            inline app::TwistAnimationSet__Class* type_info_ref = nullptr;
        }
        inline app::TwistAnimationSet__Class** type_info = &type_info_ref;
        inline app::TwistAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::TwistAnimationSet__Class>(type_info, "", "TwistAnimationSet");
        }
        inline app::TwistAnimationSet* create() {
            return il2cpp::create_object<app::TwistAnimationSet>(get_class());
        }
    } // namespace TwistAnimationSet
} // namespace app::classes::types
