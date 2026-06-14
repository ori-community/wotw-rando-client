#pragma once
#include <Modloader/app/structs/BigIntegerStorage.h>
#include <Modloader/app/structs/BigIntegerStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigIntegerStorage {
        inline app::BigIntegerStorage__Class** type_info() {
            static app::BigIntegerStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigIntegerStorage__Class**)(modloader::win::memory::resolve_rva(0x047274A8));
            }
            return cache;
        }
        inline app::BigIntegerStorage__Class* get_class() {
            return il2cpp::get_class<app::BigIntegerStorage__Class>(type_info(), "System.Data.Common", "BigIntegerStorage");
        }
        inline app::BigIntegerStorage* create() {
            return il2cpp::create_object<app::BigIntegerStorage>(get_class());
        }
    } // namespace BigIntegerStorage
} // namespace app::classes::types
