#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneSoundBankData__Class.h>
#include <Modloader/app/structs/SceneSoundBankData.h>

namespace app::classes::types {
    namespace SceneSoundBankData {
        inline app::SceneSoundBankData__Class** type_info = (app::SceneSoundBankData__Class**)(modloader::win::memory::resolve_rva(0x0478DD10));
        inline app::SceneSoundBankData__Class* get_class() {
            return il2cpp::get_class<app::SceneSoundBankData__Class>(type_info, "Moon.Wwise", "SceneSoundBankData");
        }
        inline app::SceneSoundBankData* create() {
            return il2cpp::create_object<app::SceneSoundBankData>(get_class());
        }
    } // namespace SceneSoundBankData
} // namespace app::classes::types
