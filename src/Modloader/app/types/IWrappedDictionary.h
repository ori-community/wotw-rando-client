#pragma once
#include <Modloader/app/structs/IWrappedDictionary.h>
#include <Modloader/app/structs/IWrappedDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWrappedDictionary {
        inline app::IWrappedDictionary__Class** type_info() {
            static app::IWrappedDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWrappedDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475BD90));
            }
            return cache;
        }
        inline app::IWrappedDictionary__Class* get_class() {
            return il2cpp::get_class<app::IWrappedDictionary__Class>(type_info(), "Newtonsoft.Json.Utilities", "IWrappedDictionary");
        }
    } // namespace IWrappedDictionary
} // namespace app::classes::types
