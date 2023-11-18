#pragma once
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaInfo {
        inline app::SchemaInfo__Class** type_info() {
            static app::SchemaInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaInfo__Class**)(modloader::win::memory::resolve_rva(0x04709908));
            }
            return cache;
        }
        inline app::SchemaInfo__Class* get_class() {
            return il2cpp::get_class<app::SchemaInfo__Class>(type_info(), "System.Xml.Schema", "SchemaInfo");
        }
        inline app::SchemaInfo* create() {
            return il2cpp::create_object<app::SchemaInfo>(get_class());
        }
    } // namespace SchemaInfo
} // namespace app::classes::types
