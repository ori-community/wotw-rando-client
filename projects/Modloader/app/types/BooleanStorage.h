#pragma once
#include <Modloader/app/structs/BooleanStorage.h>
#include <Modloader/app/structs/BooleanStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanStorage {
        inline app::BooleanStorage__Class** type_info() {
            static app::BooleanStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BooleanStorage__Class**)(modloader::win::memory::resolve_rva(0x0471B5E8));
            }
            return cache;
        }
        inline app::BooleanStorage__Class* get_class() {
            return il2cpp::get_class<app::BooleanStorage__Class>(type_info(), "System.Data.Common", "BooleanStorage");
        }
        inline app::BooleanStorage* create() {
            return il2cpp::create_object<app::BooleanStorage>(get_class());
        }
    } // namespace BooleanStorage
} // namespace app::classes::types
