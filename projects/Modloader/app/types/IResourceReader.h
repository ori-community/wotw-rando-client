#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IResourceReader__Class.h>

namespace app::classes::types {
    namespace IResourceReader {
        inline app::IResourceReader__Class** type_info = (app::IResourceReader__Class**)(modloader::win::memory::resolve_rva(0x04794D98));
        inline app::IResourceReader__Class* get_class() {
            return il2cpp::get_class<app::IResourceReader__Class>(type_info, "System.Resources", "IResourceReader");
        }
    } // namespace IResourceReader
} // namespace app::classes::types
