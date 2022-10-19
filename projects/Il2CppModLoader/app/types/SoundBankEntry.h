#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundBankEntry {
        namespace {
            inline app::SoundBankEntry__Class* type_info_ref = nullptr;
        }
        inline app::SoundBankEntry__Class** type_info = &type_info_ref;
        inline app::SoundBankEntry__Class* get_class() {
            return il2cpp::get_class<app::SoundBankEntry__Class>(type_info, "Moon.Wwise", "SoundBankEntry");
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
