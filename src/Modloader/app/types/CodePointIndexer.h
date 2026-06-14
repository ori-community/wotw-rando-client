#pragma once
#include <Modloader/app/structs/CodePointIndexer.h>
#include <Modloader/app/structs/CodePointIndexer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodePointIndexer {
        inline app::CodePointIndexer__Class** type_info() {
            static app::CodePointIndexer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CodePointIndexer__Class**)(modloader::win::memory::resolve_rva(0x047630C0));
            }
            return cache;
        }
        inline app::CodePointIndexer__Class* get_class() {
            return il2cpp::get_class<app::CodePointIndexer__Class>(type_info(), "Mono.Globalization.Unicode", "CodePointIndexer");
        }
        inline app::CodePointIndexer* create() {
            return il2cpp::create_object<app::CodePointIndexer>(get_class());
        }
    } // namespace CodePointIndexer
} // namespace app::classes::types
