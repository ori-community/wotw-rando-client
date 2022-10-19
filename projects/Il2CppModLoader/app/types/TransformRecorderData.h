#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformRecorderData {
        inline app::TransformRecorderData__Class** type_info = (app::TransformRecorderData__Class**)(modloader::win::memory::resolve_rva(0x047793B0));
        inline app::TransformRecorderData__Class* get_class() {
            return il2cpp::get_class<app::TransformRecorderData__Class>(type_info, "", "TransformRecorderData");
        }
        inline app::TransformRecorderData* create() {
            return il2cpp::create_object<app::TransformRecorderData>(get_class());
        }
    } // namespace TransformRecorderData
} // namespace app::classes::types
