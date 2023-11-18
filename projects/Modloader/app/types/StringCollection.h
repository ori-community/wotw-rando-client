#pragma once
#include <Modloader/app/structs/StringCollection.h>
#include <Modloader/app/structs/StringCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringCollection {
        inline app::StringCollection__Class** type_info() {
            static app::StringCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F948));
            }
            return cache;
        }
        inline app::StringCollection__Class* get_class() {
            return il2cpp::get_class<app::StringCollection__Class>(type_info(), "System.Collections.Specialized", "StringCollection");
        }
        inline app::StringCollection* create() {
            return il2cpp::create_object<app::StringCollection>(get_class());
        }
    } // namespace StringCollection
} // namespace app::classes::types
