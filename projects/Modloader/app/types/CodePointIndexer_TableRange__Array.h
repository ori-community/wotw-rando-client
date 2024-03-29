#pragma once
#include <Modloader/app/structs/CodePointIndexer_TableRange__Array.h>
#include <Modloader/app/structs/CodePointIndexer_TableRange__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodePointIndexer_TableRange__Array {
        inline app::CodePointIndexer_TableRange__Array__Class** type_info() {
            static app::CodePointIndexer_TableRange__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CodePointIndexer_TableRange__Array__Class**)(modloader::win::memory::resolve_rva(0x04796510));
            }
            return cache;
        }
        inline app::CodePointIndexer_TableRange__Array__Class* get_class() {
            return il2cpp::get_class<app::CodePointIndexer_TableRange__Array__Class>(type_info(), "Mono.Globalization.Unicode", "CodePointIndexer+TableRange[]");
        }
        inline app::CodePointIndexer_TableRange__Array* create() {
            return il2cpp::create_object<app::CodePointIndexer_TableRange__Array>(get_class());
        }
    } // namespace CodePointIndexer_TableRange__Array
} // namespace app::classes::types
