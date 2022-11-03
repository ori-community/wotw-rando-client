#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivatedClientTypeEntry {
        inline app::ActivatedClientTypeEntry__Class** type_info = (app::ActivatedClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04714100));
        inline app::ActivatedClientTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::ActivatedClientTypeEntry__Class>(type_info, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
        }
        inline app::ActivatedClientTypeEntry* create() {
            return il2cpp::create_object<app::ActivatedClientTypeEntry>(get_class());
        }
    } // namespace ActivatedClientTypeEntry
} // namespace app::classes::types
