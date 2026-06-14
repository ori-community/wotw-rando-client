#pragma once
#include <Modloader/app/structs/WeakHashtable.h>
#include <Modloader/app/structs/WeakHashtable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeakHashtable {
        inline app::WeakHashtable__Class** type_info() {
            static app::WeakHashtable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WeakHashtable__Class**)(modloader::win::memory::resolve_rva(0x047023B0));
            }
            return cache;
        }
        inline app::WeakHashtable__Class* get_class() {
            return il2cpp::get_class<app::WeakHashtable__Class>(type_info(), "System.ComponentModel", "WeakHashtable");
        }
        inline app::WeakHashtable* create() {
            return il2cpp::create_object<app::WeakHashtable>(get_class());
        }
    } // namespace WeakHashtable
} // namespace app::classes::types
