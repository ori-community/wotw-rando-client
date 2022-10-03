#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogItem__Class** type_info;
        inline app::LogItem__Class* get_class() {
            return il2cpp::get_class<app::LogItem__Class>(type_info, "TriangleNet.Logging", "LogItem");
        }
        inline app::LogItem* create() {
            return il2cpp::create_object<app::LogItem>(get_class());
        }
        inline app::LogItem__Array* create_array(int size) {
            return il2cpp::array_new<app::LogItem__Array>(get_class(), size);
        }
    } // namespace LogItem
} // namespace app::classes::types
