#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlXml__Class.h>
#include <Modloader/app/structs/SqlXml.h>

namespace app::classes::types {
    namespace SqlXml {
        inline app::SqlXml__Class** type_info = (app::SqlXml__Class**)(modloader::win::memory::resolve_rva(0x04764EA0));
        inline app::SqlXml__Class* get_class() {
            return il2cpp::get_class<app::SqlXml__Class>(type_info, "System.Data.SqlTypes", "SqlXml");
        }
        inline app::SqlXml* create() {
            return il2cpp::create_object<app::SqlXml>(get_class());
        }
    } // namespace SqlXml
} // namespace app::classes::types
