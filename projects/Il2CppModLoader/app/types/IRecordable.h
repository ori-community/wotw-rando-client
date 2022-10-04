#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRecordable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRecordable__Class** type_info;
        inline app::IRecordable__Class* get_class() {
            return il2cpp::get_class<app::IRecordable__Class>(type_info, "", "IRecordable");
        }
        inline app::IRecordable__Array* create_array(int size) {
            return il2cpp::array_new<app::IRecordable__Array>(get_class(), size);
        }
    } // namespace IRecordable
} // namespace app::classes::types
