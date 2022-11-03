#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectReader {
        inline app::ObjectReader__Class** type_info = (app::ObjectReader__Class**)(modloader::win::memory::resolve_rva(0x04705740));
        inline app::ObjectReader__Class* get_class() {
            return il2cpp::get_class<app::ObjectReader__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
        }
        inline app::ObjectReader* create() {
            return il2cpp::create_object<app::ObjectReader>(get_class());
        }
    } // namespace ObjectReader
} // namespace app::classes::types
