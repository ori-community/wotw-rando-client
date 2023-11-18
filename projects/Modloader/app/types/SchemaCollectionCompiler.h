#pragma once
#include <Modloader/app/structs/SchemaCollectionCompiler.h>
#include <Modloader/app/structs/SchemaCollectionCompiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaCollectionCompiler {
        inline app::SchemaCollectionCompiler__Class** type_info() {
            static app::SchemaCollectionCompiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaCollectionCompiler__Class**)(modloader::win::memory::resolve_rva(0x0474A4B8));
            }
            return cache;
        }
        inline app::SchemaCollectionCompiler__Class* get_class() {
            return il2cpp::get_class<app::SchemaCollectionCompiler__Class>(type_info(), "System.Xml.Schema", "SchemaCollectionCompiler");
        }
        inline app::SchemaCollectionCompiler* create() {
            return il2cpp::create_object<app::SchemaCollectionCompiler>(get_class());
        }
    } // namespace SchemaCollectionCompiler
} // namespace app::classes::types
