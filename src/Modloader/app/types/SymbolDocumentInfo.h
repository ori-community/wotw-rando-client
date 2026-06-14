#pragma once
#include <Modloader/app/structs/SymbolDocumentInfo.h>
#include <Modloader/app/structs/SymbolDocumentInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SymbolDocumentInfo {
        inline app::SymbolDocumentInfo__Class** type_info() {
            static app::SymbolDocumentInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SymbolDocumentInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C5F8));
            }
            return cache;
        }
        inline app::SymbolDocumentInfo__Class* get_class() {
            return il2cpp::get_class<app::SymbolDocumentInfo__Class>(type_info(), "System.Linq.Expressions", "SymbolDocumentInfo");
        }
        inline app::SymbolDocumentInfo* create() {
            return il2cpp::create_object<app::SymbolDocumentInfo>(get_class());
        }
    } // namespace SymbolDocumentInfo
} // namespace app::classes::types
