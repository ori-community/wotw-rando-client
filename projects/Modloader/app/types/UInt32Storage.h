#pragma once
#include <Modloader/app/structs/UInt32Storage.h>
#include <Modloader/app/structs/UInt32Storage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32Storage {
        inline app::UInt32Storage__Class** type_info() {
            static app::UInt32Storage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt32Storage__Class**)(modloader::win::memory::resolve_rva(0x0471A790));
            }
            return cache;
        }
        inline app::UInt32Storage__Class* get_class() {
            return il2cpp::get_class<app::UInt32Storage__Class>(type_info(), "System.Data.Common", "UInt32Storage");
        }
        inline app::UInt32Storage* create() {
            return il2cpp::create_object<app::UInt32Storage>(get_class());
        }
    } // namespace UInt32Storage
} // namespace app::classes::types
