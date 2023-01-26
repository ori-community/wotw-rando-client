#pragma once
#include <Modloader/app/structs/SByteStorage.h>
#include <Modloader/app/structs/SByteStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SByteStorage {
        inline app::SByteStorage__Class** type_info() {
            static app::SByteStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SByteStorage__Class**)(modloader::win::memory::resolve_rva(0x04718580));
            }
            return cache;
        }
        inline app::SByteStorage__Class* get_class() {
            return il2cpp::get_class<app::SByteStorage__Class>(type_info(), "System.Data.Common", "SByteStorage");
        }
        inline app::SByteStorage* create() {
            return il2cpp::create_object<app::SByteStorage>(get_class());
        }
    } // namespace SByteStorage
} // namespace app::classes::types
