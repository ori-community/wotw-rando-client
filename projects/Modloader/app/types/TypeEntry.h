#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeEntry__Class.h>
#include <Modloader/app/structs/TypeEntry.h>

namespace app::classes::types {
    namespace TypeEntry {
        inline app::TypeEntry__Class** type_info = (app::TypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047211A8));
        inline app::TypeEntry__Class* get_class() {
            return il2cpp::get_class<app::TypeEntry__Class>(type_info, "System.Runtime.Remoting", "TypeEntry");
        }
        inline app::TypeEntry* create() {
            return il2cpp::create_object<app::TypeEntry>(get_class());
        }
    } // namespace TypeEntry
} // namespace app::classes::types
