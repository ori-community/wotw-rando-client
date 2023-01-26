#pragma once
#include <Modloader/app/structs/ReaderWriterLockSlim.h>
#include <Modloader/app/structs/ReaderWriterLockSlim__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReaderWriterLockSlim {
        inline app::ReaderWriterLockSlim__Class** type_info() {
            static app::ReaderWriterLockSlim__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReaderWriterLockSlim__Class**)(modloader::win::memory::resolve_rva(0x04755FE0));
            }
            return cache;
        }
        inline app::ReaderWriterLockSlim__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterLockSlim__Class>(type_info(), "System.Threading", "ReaderWriterLockSlim");
        }
        inline app::ReaderWriterLockSlim* create() {
            return il2cpp::create_object<app::ReaderWriterLockSlim>(get_class());
        }
    } // namespace ReaderWriterLockSlim
} // namespace app::classes::types
