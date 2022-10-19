#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecordingContext {
        inline app::IRecordingContext__Class** type_info = (app::IRecordingContext__Class**)(modloader::win::memory::resolve_rva(0x04725070));
        inline app::IRecordingContext__Class* get_class() {
            return il2cpp::get_class<app::IRecordingContext__Class>(type_info, "Moon.Timeline", "IRecordingContext");
        }
    } // namespace IRecordingContext
} // namespace app::classes::types
