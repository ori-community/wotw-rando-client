#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SchemaNames__Class.h>
#include <Modloader/app/structs/SchemaNames.h>

namespace app::classes::types {
    namespace SchemaNames {
        inline app::SchemaNames__Class** type_info = (app::SchemaNames__Class**)(modloader::win::memory::resolve_rva(0x04724DA0));
        inline app::SchemaNames__Class* get_class() {
            return il2cpp::get_class<app::SchemaNames__Class>(type_info, "System.Xml.Schema", "SchemaNames");
        }
        inline app::SchemaNames* create() {
            return il2cpp::create_object<app::SchemaNames>(get_class());
        }
    } // namespace SchemaNames
} // namespace app::classes::types
