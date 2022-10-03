#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterLock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReaderWriterLock__Class** type_info;
        inline app::ReaderWriterLock__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterLock__Class>(type_info, "System.Threading", "ReaderWriterLock");
        }
        inline app::ReaderWriterLock* create() {
            return il2cpp::create_object<app::ReaderWriterLock>(get_class());
        }
    } // namespace ReaderWriterLock
} // namespace app::classes::types
