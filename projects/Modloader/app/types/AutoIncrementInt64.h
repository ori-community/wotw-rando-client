#pragma once
#include <Modloader/app/structs/AutoIncrementInt64.h>
#include <Modloader/app/structs/AutoIncrementInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoIncrementInt64 {
        inline app::AutoIncrementInt64__Class** type_info() {
            static app::AutoIncrementInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoIncrementInt64__Class**)(modloader::win::memory::resolve_rva(0x0473EA10));
            }
            return cache;
        }
        inline app::AutoIncrementInt64__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementInt64__Class>(type_info(), "System.Data", "AutoIncrementInt64");
        }
        inline app::AutoIncrementInt64* create() {
            return il2cpp::create_object<app::AutoIncrementInt64>(get_class());
        }
    } // namespace AutoIncrementInt64
} // namespace app::classes::types
