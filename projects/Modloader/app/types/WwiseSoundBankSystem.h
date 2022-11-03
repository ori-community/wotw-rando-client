#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseSoundBankSystem {
        inline app::WwiseSoundBankSystem__Class** type_info = (app::WwiseSoundBankSystem__Class**)(modloader::win::memory::resolve_rva(0x04734C78));
        inline app::WwiseSoundBankSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseSoundBankSystem__Class>(type_info, "Moon.Wwise", "WwiseSoundBankSystem");
        }
        inline app::WwiseSoundBankSystem* create() {
            return il2cpp::create_object<app::WwiseSoundBankSystem>(get_class());
        }
    } // namespace WwiseSoundBankSystem
} // namespace app::classes::types
