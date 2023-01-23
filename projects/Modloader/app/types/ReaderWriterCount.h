#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReaderWriterCount__Class.h>
#include <Modloader/app/structs/ReaderWriterCount.h>

namespace app::classes::types {
    namespace ReaderWriterCount {
        inline app::ReaderWriterCount__Class** type_info = (app::ReaderWriterCount__Class**)(modloader::win::memory::resolve_rva(0x04730BF0));
        inline app::ReaderWriterCount__Class* get_class() {
            return il2cpp::get_class<app::ReaderWriterCount__Class>(type_info, "System.Threading", "ReaderWriterCount");
        }
        inline app::ReaderWriterCount* create() {
            return il2cpp::create_object<app::ReaderWriterCount>(get_class());
        }
    } // namespace ReaderWriterCount
} // namespace app::classes::types
