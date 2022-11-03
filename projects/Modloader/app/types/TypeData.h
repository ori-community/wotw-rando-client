#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeData {
        inline app::TypeData__Class** type_info = (app::TypeData__Class**)(modloader::win::memory::resolve_rva(0x04769FD8));
        inline app::TypeData__Class* get_class() {
            return il2cpp::get_class<app::TypeData__Class>(type_info, "System.Xml.Serialization", "TypeData");
        }
        inline app::TypeData* create() {
            return il2cpp::create_object<app::TypeData>(get_class());
        }
    } // namespace TypeData
} // namespace app::classes::types
