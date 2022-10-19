#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReaderWriterLockSlim {
        inline app::ReaderWriterLockSlim__Class** type_info = (app::ReaderWriterLockSlim__Class**)(modloader::win::memory::resolve_rva(0x04755FE0));
        inline app::ReaderWriterLockSlim__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterLockSlim__Class>(type_info, "System.Threading", "ReaderWriterLockSlim");
        }
        inline app::ReaderWriterLockSlim* create() {
            return il2cpp::create_object<app::ReaderWriterLockSlim>(get_class());
        }
    } // namespace ReaderWriterLockSlim
} // namespace app::classes::types
