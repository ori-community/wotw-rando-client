#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaInfo {
        inline app::SchemaInfo__Class** type_info = (app::SchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x04709908));
        inline app::SchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::SchemaInfo__Class>(type_info, "System.Xml.Schema", "SchemaInfo");
        }
        inline app::SchemaInfo* create() {
            return il2cpp::create_object<app::SchemaInfo>(get_class());
        }
    } // namespace SchemaInfo
} // namespace app::classes::types
