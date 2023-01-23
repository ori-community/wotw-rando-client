#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberColorAnimator__Class.h>
#include <Modloader/app/structs/UberColorAnimator.h>

namespace app::classes::types {
    namespace UberColorAnimator {
        inline app::UberColorAnimator__Class** type_info = (app::UberColorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04796258));
        inline app::UberColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberColorAnimator__Class>(type_info, "", "UberColorAnimator");
        }
        inline app::UberColorAnimator* create() {
            return il2cpp::create_object<app::UberColorAnimator>(get_class());
        }
    } // namespace UberColorAnimator
} // namespace app::classes::types
