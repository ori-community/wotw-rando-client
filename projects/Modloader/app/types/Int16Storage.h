#pragma once
#include <Modloader/app/structs/Int16Storage.h>
#include <Modloader/app/structs/Int16Storage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int16Storage {
        inline app::Int16Storage__Class** type_info() {
            static app::Int16Storage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Int16Storage__Class**)(modloader::win::memory::resolve_rva(0x04773090));
            }
            return cache;
        }
        inline app::Int16Storage__Class* get_class() {
            return il2cpp::get_class<app::Int16Storage__Class>(type_info(), "System.Data.Common", "Int16Storage");
        }
        inline app::Int16Storage* create() {
            return il2cpp::create_object<app::Int16Storage>(get_class());
        }
    } // namespace Int16Storage
} // namespace app::classes::types
