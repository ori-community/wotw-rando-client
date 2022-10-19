#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction {
        inline app::ScenesManagerPrediction__Class** type_info = (app::ScenesManagerPrediction__Class**)(modloader::win::memory::resolve_rva(0x047657A8));
        inline app::ScenesManagerPrediction__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerPrediction__Class>(type_info, "", "ScenesManagerPrediction");
        }
        inline app::ScenesManagerPrediction* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction>(get_class());
        }
    } // namespace ScenesManagerPrediction
} // namespace app::classes::types
