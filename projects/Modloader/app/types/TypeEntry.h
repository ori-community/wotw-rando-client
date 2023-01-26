#pragma once
#include <Modloader/app/structs/TypeEntry.h>
#include <Modloader/app/structs/TypeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeEntry {
        inline app::TypeEntry__Class** type_info() {
            static app::TypeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047211A8));
            }
            return cache;
        }
        inline app::TypeEntry__Class* get_class() {
            return il2cpp::get_class<app::TypeEntry__Class>(type_info(), "System.Runtime.Remoting", "TypeEntry");
        }
        inline app::TypeEntry* create() {
            return il2cpp::create_object<app::TypeEntry>(get_class());
        }
    } // namespace TypeEntry
} // namespace app::classes::types
