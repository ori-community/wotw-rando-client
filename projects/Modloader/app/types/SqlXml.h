#pragma once
#include <Modloader/app/structs/SqlXml.h>
#include <Modloader/app/structs/SqlXml__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlXml {
        inline app::SqlXml__Class** type_info() {
            static app::SqlXml__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlXml__Class**)(modloader::win::memory::resolve_rva(0x04764EA0));
            }
            return cache;
        }
        inline app::SqlXml__Class* get_class() {
            return il2cpp::get_class<app::SqlXml__Class>(type_info(), "System.Data.SqlTypes", "SqlXml");
        }
        inline app::SqlXml* create() {
            return il2cpp::create_object<app::SqlXml>(get_class());
        }
    } // namespace SqlXml
} // namespace app::classes::types
