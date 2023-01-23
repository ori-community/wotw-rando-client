#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LandOnAnimator__Class.h>
#include <Modloader/app/structs/LandOnAnimator.h>

namespace app::classes::types {
    namespace LandOnAnimator {
        inline app::LandOnAnimator__Class** type_info = (app::LandOnAnimator__Class**)(modloader::win::memory::resolve_rva(0x04784B08));
        inline app::LandOnAnimator__Class* get_class() {
            return il2cpp::get_class<app::LandOnAnimator__Class>(type_info, "", "LandOnAnimator");
        }
        inline app::LandOnAnimator* create() {
            return il2cpp::create_object<app::LandOnAnimator>(get_class());
        }
    } // namespace LandOnAnimator
} // namespace app::classes::types
