#pragma once
#include <Modloader/app/structs/NameCache.h>
#include <Modloader/app/structs/NameCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameCache {
        inline app::NameCache__Class** type_info() {
            static app::NameCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameCache__Class**)(modloader::win::memory::resolve_rva(0x04776730));
            }
            return cache;
        }
        inline app::NameCache__Class* get_class() {
            return il2cpp::get_class<app::NameCache__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "NameCache");
        }
        inline app::NameCache* create() {
            return il2cpp::create_object<app::NameCache>(get_class());
        }
    } // namespace NameCache
} // namespace app::classes::types
