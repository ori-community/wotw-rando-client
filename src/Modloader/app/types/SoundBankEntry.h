#pragma once
#include <Modloader/app/structs/SoundBankEntry.h>
#include <Modloader/app/structs/SoundBankEntry__Array.h>
#include <Modloader/app/structs/SoundBankEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundBankEntry {
        inline app::SoundBankEntry__Class** type_info() {
            static app::SoundBankEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundBankEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundBankEntry__Class* get_class() {
            return il2cpp::get_class<app::SoundBankEntry__Class>(type_info(), "Moon.Wwise", "SoundBankEntry");
        }
        inline app::SoundBankEntry* create() {
            return il2cpp::create_object<app::SoundBankEntry>(get_class());
        }
        inline app::SoundBankEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundBankEntry__Array>(get_class(), size);
        }
        inline app::SoundBankEntry__Array* create_array(const std::vector<app::SoundBankEntry*>& items) {
            return il2cpp::array_new<app::SoundBankEntry__Array>(get_class(), items);
        }
    } // namespace SoundBankEntry
} // namespace app::classes::types
