#pragma once
#include <Modloader/app/structs/IWrappedCollection.h>
#include <Modloader/app/structs/IWrappedCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWrappedCollection {
        inline app::IWrappedCollection__Class** type_info() {
            static app::IWrappedCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWrappedCollection__Class**)(modloader::win::memory::resolve_rva(0x04749A68));
            }
            return cache;
        }
        inline app::IWrappedCollection__Class* get_class() {
            return il2cpp::get_class<app::IWrappedCollection__Class>(type_info(), "Newtonsoft.Json.Utilities", "IWrappedCollection");
        }
    } // namespace IWrappedCollection
} // namespace app::classes::types
