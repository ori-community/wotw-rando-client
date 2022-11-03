#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReaderWriterLock {
        inline app::ReaderWriterLock__Class** type_info = (app::ReaderWriterLock__Class**)(modloader::win::memory::resolve_rva(0x0471AC28));
        inline app::ReaderWriterLock__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterLock__Class>(type_info, "System.Threading", "ReaderWriterLock");
        }
        inline app::ReaderWriterLock* create() {
            return il2cpp::create_object<app::ReaderWriterLock>(get_class());
        }
    } // namespace ReaderWriterLock
} // namespace app::classes::types
