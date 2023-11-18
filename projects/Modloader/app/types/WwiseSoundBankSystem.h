#pragma once
#include <Modloader/app/structs/WwiseSoundBankSystem.h>
#include <Modloader/app/structs/WwiseSoundBankSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseSoundBankSystem {
        inline app::WwiseSoundBankSystem__Class** type_info() {
            static app::WwiseSoundBankSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseSoundBankSystem__Class**)(modloader::win::memory::resolve_rva(0x04734C78));
            }
            return cache;
        }
        inline app::WwiseSoundBankSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseSoundBankSystem__Class>(type_info(), "Moon.Wwise", "WwiseSoundBankSystem");
        }
        inline app::WwiseSoundBankSystem* create() {
            return il2cpp::create_object<app::WwiseSoundBankSystem>(get_class());
        }
    } // namespace WwiseSoundBankSystem
} // namespace app::classes::types
