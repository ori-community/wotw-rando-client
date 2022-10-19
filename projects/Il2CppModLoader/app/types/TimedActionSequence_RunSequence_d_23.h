#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimedActionSequence_RunSequence_d_23 {
        inline app::TimedActionSequence_RunSequence_d_23__Class** type_info = (app::TimedActionSequence_RunSequence_d_23__Class**)(modloader::win::memory::resolve_rva(0x047283E0));
        inline app::TimedActionSequence_RunSequence_d_23__Class* get_class() {
            return il2cpp::get_nested_class<app::TimedActionSequence_RunSequence_d_23__Class>(type_info, "", "TimedActionSequence", "<RunSequence>d__23");
        }
        inline app::TimedActionSequence_RunSequence_d_23* create() {
            return il2cpp::create_object<app::TimedActionSequence_RunSequence_d_23>(get_class());
        }
    } // namespace TimedActionSequence_RunSequence_d_23
} // namespace app::classes::types
