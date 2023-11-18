#pragma once
#include <Modloader/app/structs/DoubleStorage.h>
#include <Modloader/app/structs/DoubleStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleStorage {
        inline app::DoubleStorage__Class** type_info() {
            static app::DoubleStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DoubleStorage__Class**)(modloader::win::memory::resolve_rva(0x0472ECC8));
            }
            return cache;
        }
        inline app::DoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::DoubleStorage__Class>(type_info(), "System.Data.Common", "DoubleStorage");
        }
        inline app::DoubleStorage* create() {
            return il2cpp::create_object<app::DoubleStorage>(get_class());
        }
    } // namespace DoubleStorage
} // namespace app::classes::types
