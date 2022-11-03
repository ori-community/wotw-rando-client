#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StomperAnimator {
        inline app::StomperAnimator__Class** type_info = (app::StomperAnimator__Class**)(modloader::win::memory::resolve_rva(0x047808D0));
        inline app::StomperAnimator__Class* get_class() {
            return il2cpp::get_class<app::StomperAnimator__Class>(type_info, "", "StomperAnimator");
        }
        inline app::StomperAnimator* create() {
            return il2cpp::create_object<app::StomperAnimator>(get_class());
        }
    } // namespace StomperAnimator
} // namespace app::classes::types
