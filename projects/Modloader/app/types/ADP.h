#pragma once
#include <Modloader/app/structs/ADP.h>
#include <Modloader/app/structs/ADP__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ADP {
        inline app::ADP__Class** type_info() {
            static app::ADP__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ADP__Class**)(modloader::win::memory::resolve_rva(0x047240A8));
            }
            return cache;
        }
        inline app::ADP__Class* get_class() {
            return il2cpp::get_class<app::ADP__Class>(type_info(), "System.Data.Common", "ADP");
        }
        inline app::ADP* create() {
            return il2cpp::create_object<app::ADP>(get_class());
        }
    } // namespace ADP
} // namespace app::classes::types
