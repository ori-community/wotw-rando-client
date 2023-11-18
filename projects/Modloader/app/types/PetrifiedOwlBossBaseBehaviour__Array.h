#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Array.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossBaseBehaviour__Array {
        inline app::PetrifiedOwlBossBaseBehaviour__Array__Class** type_info() {
            static app::PetrifiedOwlBossBaseBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossBaseBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossBaseBehaviour__Array__Class>(type_info(), "", "PetrifiedOwlBossBaseBehaviour[]");
        }
        inline app::PetrifiedOwlBossBaseBehaviour__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossBaseBehaviour__Array>(get_class());
        }
    } // namespace PetrifiedOwlBossBaseBehaviour__Array
} // namespace app::classes::types
