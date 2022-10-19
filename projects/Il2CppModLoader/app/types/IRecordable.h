#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRecordable {
        inline app::IRecordable__Class** type_info = (app::IRecordable__Class**)(modloader::win::memory::resolve_rva(0x04780E50));
        inline app::IRecordable__Class* get_class() {
            return il2cpp::get_class<app::IRecordable__Class>(type_info, "", "IRecordable");
        }
        inline app::IRecordable__Array* create_array(int size) {
            return il2cpp::array_new<app::IRecordable__Array>(get_class(), size);
        }
        inline app::IRecordable__Array* create_array(const std::vector<app::IRecordable*>& items) {
            return il2cpp::array_new<app::IRecordable__Array>(get_class(), items);
        }
    } // namespace IRecordable
} // namespace app::classes::types
