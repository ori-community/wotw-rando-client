#pragma once
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/IPHostEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPHostEntry {
        inline app::IPHostEntry__Class** type_info() {
            static app::IPHostEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPHostEntry__Class**)(modloader::win::memory::resolve_rva(0x0474F468));
            }
            return cache;
        }
        inline app::IPHostEntry__Class* get_class() {
            return il2cpp::get_class<app::IPHostEntry__Class>(type_info(), "System.Net", "IPHostEntry");
        }
        inline app::IPHostEntry* create() {
            return il2cpp::create_object<app::IPHostEntry>(get_class());
        }
    } // namespace IPHostEntry
} // namespace app::classes::types
