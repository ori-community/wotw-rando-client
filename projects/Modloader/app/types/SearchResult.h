#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SearchResult {
        inline app::SearchResult__Class** type_info = (app::SearchResult__Class**)(modloader::win::memory::resolve_rva(0x0474A8E8));
        inline app::SearchResult__Class* get_class() {
            return il2cpp::get_class<app::SearchResult__Class>(type_info, "System.IO", "SearchResult");
        }
        inline app::SearchResult* create() {
            return il2cpp::create_object<app::SearchResult>(get_class());
        }
    } // namespace SearchResult
} // namespace app::classes::types
