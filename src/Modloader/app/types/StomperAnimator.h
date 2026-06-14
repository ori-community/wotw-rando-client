#pragma once
#include <Modloader/app/structs/StomperAnimator.h>
#include <Modloader/app/structs/StomperAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StomperAnimator {
        inline app::StomperAnimator__Class** type_info() {
            static app::StomperAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StomperAnimator__Class**)(modloader::win::memory::resolve_rva(0x047808D0));
            }
            return cache;
        }
        inline app::StomperAnimator__Class* get_class() {
            return il2cpp::get_class<app::StomperAnimator__Class>(type_info(), "", "StomperAnimator");
        }
        inline app::StomperAnimator* create() {
            return il2cpp::create_object<app::StomperAnimator>(get_class());
        }
    } // namespace StomperAnimator
} // namespace app::classes::types
