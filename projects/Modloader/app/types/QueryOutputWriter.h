#pragma once
#include <Modloader/app/structs/QueryOutputWriter.h>
#include <Modloader/app/structs/QueryOutputWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QueryOutputWriter {
        inline app::QueryOutputWriter__Class** type_info() {
            static app::QueryOutputWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QueryOutputWriter__Class**)(modloader::win::memory::resolve_rva(0x0472CAF8));
            }
            return cache;
        }
        inline app::QueryOutputWriter__Class* get_class() {
            return il2cpp::get_class<app::QueryOutputWriter__Class>(type_info(), "System.Xml", "QueryOutputWriter");
        }
        inline app::QueryOutputWriter* create() {
            return il2cpp::create_object<app::QueryOutputWriter>(get_class());
        }
    } // namespace QueryOutputWriter
} // namespace app::classes::types
