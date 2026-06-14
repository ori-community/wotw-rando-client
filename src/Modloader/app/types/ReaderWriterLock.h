#pragma once
#include <Modloader/app/structs/ReaderWriterLock.h>
#include <Modloader/app/structs/ReaderWriterLock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterLock {
        inline app::ReaderWriterLock__Class** type_info() {
            static app::ReaderWriterLock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReaderWriterLock__Class**)(modloader::win::memory::resolve_rva(0x0471AC28));
            }
            return cache;
        }
        inline app::ReaderWriterLock__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterLock__Class>(type_info(), "System.Threading", "ReaderWriterLock");
        }
        inline app::ReaderWriterLock* create() {
            return il2cpp::create_object<app::ReaderWriterLock>(get_class());
        }
    } // namespace ReaderWriterLock
} // namespace app::classes::types
