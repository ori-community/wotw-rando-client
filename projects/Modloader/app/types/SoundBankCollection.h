#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundBankCollection {
        namespace {
            inline app::SoundBankCollection__Class* type_info_ref = nullptr;
        }
        inline app::SoundBankCollection__Class** type_info = &type_info_ref;
        inline app::SoundBankCollection__Class* get_class() {
            return il2cpp::get_class<app::SoundBankCollection__Class>(type_info, "Moon.Wwise", "SoundBankCollection");
        }
        inline app::SoundBankCollection* create() {
            return il2cpp::create_object<app::SoundBankCollection>(get_class());
        }
    } // namespace SoundBankCollection
} // namespace app::classes::types
