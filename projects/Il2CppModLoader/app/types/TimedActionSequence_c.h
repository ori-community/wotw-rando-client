#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimedActionSequence_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimedActionSequence_c__Class** type_info;
        inline app::TimedActionSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimedActionSequence_c__Class>(type_info, "", "TimedActionSequence", "<>c");
        }
        inline app::TimedActionSequence_c* create() {
            return il2cpp::create_object<app::TimedActionSequence_c>(get_class());
        }
    } // namespace TimedActionSequence_c
} // namespace app::classes::types
