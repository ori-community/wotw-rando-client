#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionSequence_c {
        inline app::ActionSequence_c__Class** type_info = (app::ActionSequence_c__Class**)(modloader::win::memory::resolve_rva(0x0478E968));
        inline app::ActionSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionSequence_c__Class>(type_info, "", "ActionSequence", "<>c");
        }
        inline app::ActionSequence_c* create() {
            return il2cpp::create_object<app::ActionSequence_c>(get_class());
        }
    } // namespace ActionSequence_c
} // namespace app::classes::types
