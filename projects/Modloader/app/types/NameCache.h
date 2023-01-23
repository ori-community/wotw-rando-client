#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameCache__Class.h>
#include <Modloader/app/structs/NameCache.h>

namespace app::classes::types {
    namespace NameCache {
        inline app::NameCache__Class** type_info = (app::NameCache__Class**)(modloader::win::memory::resolve_rva(0x04776730));
        inline app::NameCache__Class* get_class() {
            return il2cpp::get_class<app::NameCache__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "NameCache");
        }
        inline app::NameCache* create() {
            return il2cpp::create_object<app::NameCache>(get_class());
        }
    } // namespace NameCache
} // namespace app::classes::types
