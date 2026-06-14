#pragma once
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Hashtable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Hashtable {
        inline app::Hashtable__Class** type_info() {
            static app::Hashtable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Hashtable__Class**)(modloader::win::memory::resolve_rva(0x0474CB00));
            }
            return cache;
        }
        inline app::Hashtable__Class* get_class() {
            return il2cpp::get_class<app::Hashtable__Class>(type_info(), "System.Collections", "Hashtable");
        }
        inline app::Hashtable* create() {
            return il2cpp::create_object<app::Hashtable>(get_class());
        }
    } // namespace Hashtable
} // namespace app::classes::types
