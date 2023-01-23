#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeystoneDoorAnimator__Class.h>
#include <Modloader/app/structs/KeystoneDoorAnimator.h>

namespace app::classes::types {
    namespace KeystoneDoorAnimator {
        inline app::KeystoneDoorAnimator__Class** type_info = (app::KeystoneDoorAnimator__Class**)(modloader::win::memory::resolve_rva(0x04775DF8));
        inline app::KeystoneDoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorAnimator__Class>(type_info, "", "KeystoneDoorAnimator");
        }
        inline app::KeystoneDoorAnimator* create() {
            return il2cpp::create_object<app::KeystoneDoorAnimator>(get_class());
        }
    } // namespace KeystoneDoorAnimator
} // namespace app::classes::types
