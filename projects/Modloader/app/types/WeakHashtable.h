#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeakHashtable__Class.h>
#include <Modloader/app/structs/WeakHashtable.h>

namespace app::classes::types {
    namespace WeakHashtable {
        inline app::WeakHashtable__Class** type_info = (app::WeakHashtable__Class**)(modloader::win::memory::resolve_rva(0x047023B0));
        inline app::WeakHashtable__Class* get_class() {
            return il2cpp::get_class<app::WeakHashtable__Class>(type_info, "System.ComponentModel", "WeakHashtable");
        }
        inline app::WeakHashtable* create() {
            return il2cpp::create_object<app::WeakHashtable>(get_class());
        }
    } // namespace WeakHashtable
} // namespace app::classes::types
