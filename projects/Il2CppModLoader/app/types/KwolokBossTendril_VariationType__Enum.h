#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossTendril_VariationType__Enum {
        inline app::KwolokBossTendril_VariationType__Enum__Class** type_info = (app::KwolokBossTendril_VariationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04737000));
        inline app::KwolokBossTendril_VariationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendril_VariationType__Enum__Class>(type_info, "", "KwolokBossTendril", "VariationType");
        }
        inline app::KwolokBossTendril_VariationType__Enum* create() {
            return il2cpp::create_object<app::KwolokBossTendril_VariationType__Enum>(get_class());
        }
        inline app::KwolokBossTendril_VariationType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossTendril_VariationType__Enum__Array>(get_class(), size);
        }
        inline app::KwolokBossTendril_VariationType__Enum__Array* create_array(const std::vector<app::KwolokBossTendril_VariationType__Enum*>& items) {
            return il2cpp::array_new<app::KwolokBossTendril_VariationType__Enum__Array>(get_class(), items);
        }
    } // namespace KwolokBossTendril_VariationType__Enum
} // namespace app::classes::types
