#pragma once
#include <Modloader/app/structs/SearchResult.h>
#include <Modloader/app/structs/SearchResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SearchResult {
        inline app::SearchResult__Class** type_info() {
            static app::SearchResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SearchResult__Class**)(modloader::win::memory::resolve_rva(0x0474A8E8));
            }
            return cache;
        }
        inline app::SearchResult__Class* get_class() {
            return il2cpp::get_class<app::SearchResult__Class>(type_info(), "System.IO", "SearchResult");
        }
        inline app::SearchResult* create() {
            return il2cpp::create_object<app::SearchResult>(get_class());
        }
    } // namespace SearchResult
} // namespace app::classes::types
