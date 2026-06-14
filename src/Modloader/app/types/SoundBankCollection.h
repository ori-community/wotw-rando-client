#pragma once
#include <Modloader/app/structs/SoundBankCollection.h>
#include <Modloader/app/structs/SoundBankCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundBankCollection {
        inline app::SoundBankCollection__Class** type_info() {
            static app::SoundBankCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundBankCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundBankCollection__Class* get_class() {
            return il2cpp::get_class<app::SoundBankCollection__Class>(type_info(), "Moon.Wwise", "SoundBankCollection");
        }
        inline app::SoundBankCollection* create() {
            return il2cpp::create_object<app::SoundBankCollection>(get_class());
        }
    } // namespace SoundBankCollection
} // namespace app::classes::types
