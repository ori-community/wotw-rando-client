#pragma once
#include <Modloader/app/structs/LocalDataStoreHolder.h>
#include <Modloader/app/structs/LocalDataStoreHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreHolder {
        inline app::LocalDataStoreHolder__Class** type_info() {
            static app::LocalDataStoreHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDataStoreHolder__Class**)(modloader::win::memory::resolve_rva(0x0477CCB8));
            }
            return cache;
        }
        inline app::LocalDataStoreHolder__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreHolder__Class>(type_info(), "System", "LocalDataStoreHolder");
        }
        inline app::LocalDataStoreHolder* create() {
            return il2cpp::create_object<app::LocalDataStoreHolder>(get_class());
        }
    } // namespace LocalDataStoreHolder
} // namespace app::classes::types
