#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateWwiseStateManager__Class.h>
#include <Modloader/app/structs/UberStateWwiseStateManager.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager {
        inline app::UberStateWwiseStateManager__Class** type_info = (app::UberStateWwiseStateManager__Class**)(modloader::win::memory::resolve_rva(0x047630E8));
        inline app::UberStateWwiseStateManager__Class* get_class() {
            return il2cpp::get_class<app::UberStateWwiseStateManager__Class>(type_info, "Moon.Wwise", "UberStateWwiseStateManager");
        }
        inline app::UberStateWwiseStateManager* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager>(get_class());
        }
    } // namespace UberStateWwiseStateManager
} // namespace app::classes::types
