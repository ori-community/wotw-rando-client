#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Hashtable {
        inline app::Hashtable__Class** type_info = (app::Hashtable__Class**)(modloader::win::memory::resolve_rva(0x0474CB00));
        inline app::Hashtable__Class* get_class() {
            return il2cpp::get_class<app::Hashtable__Class>(type_info, "System.Collections", "Hashtable");
        }
        inline app::Hashtable* create() {
            return il2cpp::create_object<app::Hashtable>(get_class());
        }
    } // namespace Hashtable
} // namespace app::classes::types
