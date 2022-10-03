#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Recorder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Recorder_c__Class** type_info;
        inline app::Recorder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_c__Class>(type_info, "", "Recorder", "<>c");
        }
        inline app::Recorder_c* create() {
            return il2cpp::create_object<app::Recorder_c>(get_class());
        }
    } // namespace Recorder_c
} // namespace app::classes::types
