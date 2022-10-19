#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitStop_Entry {
        inline app::HitStop_Entry__Class** type_info = (app::HitStop_Entry__Class**)(modloader::win::memory::resolve_rva(0x0478CA60));
        inline app::HitStop_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::HitStop_Entry__Class>(type_info, "Moon", "HitStop", "Entry");
        }
        inline app::HitStop_Entry* create() {
            return il2cpp::create_object<app::HitStop_Entry>(get_class());
        }
        inline app::HitStop_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::HitStop_Entry__Array>(get_class(), size);
        }
        inline app::HitStop_Entry__Array* create_array(const std::vector<app::HitStop_Entry*>& items) {
            return il2cpp::array_new<app::HitStop_Entry__Array>(get_class(), items);
        }
    } // namespace HitStop_Entry
} // namespace app::classes::types
