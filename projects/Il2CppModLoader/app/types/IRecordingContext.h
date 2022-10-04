#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecordingContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRecordingContext__Class** type_info;
        inline app::IRecordingContext__Class* get_class() {
            return il2cpp::get_class<app::IRecordingContext__Class>(type_info, "Moon.Timeline", "IRecordingContext");
        }
    } // namespace IRecordingContext
} // namespace app::classes::types
