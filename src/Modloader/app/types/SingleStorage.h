#pragma once
#include <Modloader/app/structs/SingleStorage.h>
#include <Modloader/app/structs/SingleStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleStorage {
        inline app::SingleStorage__Class** type_info() {
            static app::SingleStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SingleStorage__Class**)(modloader::win::memory::resolve_rva(0x04745378));
            }
            return cache;
        }
        inline app::SingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SingleStorage__Class>(type_info(), "System.Data.Common", "SingleStorage");
        }
        inline app::SingleStorage* create() {
            return il2cpp::create_object<app::SingleStorage>(get_class());
        }
    } // namespace SingleStorage
} // namespace app::classes::types
