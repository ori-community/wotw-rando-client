#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CaptureData {
        inline app::CaptureData__Class** type_info = (app::CaptureData__Class**)(modloader::win::memory::resolve_rva(0x0472C7A0));
        inline app::CaptureData__Class* get_class() {
            return il2cpp::get_class<app::CaptureData__Class>(type_info, "Moon.Timeline", "CaptureData");
        }
        inline app::CaptureData* create() {
            return il2cpp::create_object<app::CaptureData>(get_class());
        }
    } // namespace CaptureData
} // namespace app::classes::types
