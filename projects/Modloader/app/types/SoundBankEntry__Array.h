#pragma once
#include <Modloader/app/structs/SoundBankEntry__Array.h>
#include <Modloader/app/structs/SoundBankEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundBankEntry__Array {
        inline app::SoundBankEntry__Array__Class** type_info() {
            static app::SoundBankEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundBankEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundBankEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundBankEntry__Array__Class>(type_info(), "Moon.Wwise", "SoundBankEntry[]");
        }
        inline app::SoundBankEntry__Array* create() {
            return il2cpp::create_object<app::SoundBankEntry__Array>(get_class());
        }
    } // namespace SoundBankEntry__Array
} // namespace app::classes::types
