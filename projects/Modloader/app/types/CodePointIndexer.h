#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CodePointIndexer {
        inline app::CodePointIndexer__Class** type_info = (app::CodePointIndexer__Class**)(modloader::win::memory::resolve_rva(0x047630C0));
        inline app::CodePointIndexer__Class* get_class() {
            return il2cpp::get_class<app::CodePointIndexer__Class>(type_info, "Mono.Globalization.Unicode", "CodePointIndexer");
        }
        inline app::CodePointIndexer* create() {
            return il2cpp::create_object<app::CodePointIndexer>(get_class());
        }
    } // namespace CodePointIndexer
} // namespace app::classes::types
