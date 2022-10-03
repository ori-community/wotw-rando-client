#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterCount {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReaderWriterCount__Class** type_info;
        inline app::ReaderWriterCount__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterCount__Class>(type_info, "System.Threading", "ReaderWriterCount");
        }
        inline app::ReaderWriterCount* create() {
            return il2cpp::create_object<app::ReaderWriterCount>(get_class());
        }
    } // namespace ReaderWriterCount
} // namespace app::classes::types
