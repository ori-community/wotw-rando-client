#pragma once
#include <Modloader/app/structs/UInt64Storage.h>
#include <Modloader/app/structs/UInt64Storage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt64Storage {
        inline app::UInt64Storage__Class** type_info() {
            static app::UInt64Storage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt64Storage__Class**)(modloader::win::memory::resolve_rva(0x0472AF98));
            }
            return cache;
        }
        inline app::UInt64Storage__Class* get_class() {
            return il2cpp::get_class<app::UInt64Storage__Class>(type_info(), "System.Data.Common", "UInt64Storage");
        }
        inline app::UInt64Storage* create() {
            return il2cpp::create_object<app::UInt64Storage>(get_class());
        }
    } // namespace UInt64Storage
} // namespace app::classes::types
