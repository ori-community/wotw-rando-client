#pragma once
#include <Modloader/app/structs/IResourceReader.h>
#include <Modloader/app/structs/IResourceReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IResourceReader {
        inline app::IResourceReader__Class** type_info() {
            static app::IResourceReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IResourceReader__Class**)(modloader::win::memory::resolve_rva(0x04794D98));
            }
            return cache;
        }
        inline app::IResourceReader__Class* get_class() {
            return il2cpp::get_class<app::IResourceReader__Class>(type_info(), "System.Resources", "IResourceReader");
        }
    } // namespace IResourceReader
} // namespace app::classes::types
