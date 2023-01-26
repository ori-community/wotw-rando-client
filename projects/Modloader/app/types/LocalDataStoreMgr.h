#pragma once
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#include <Modloader/app/structs/LocalDataStoreMgr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreMgr {
        inline app::LocalDataStoreMgr__Class** type_info() {
            static app::LocalDataStoreMgr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalDataStoreMgr__Class**)(modloader::win::memory::resolve_rva(0x04776588));
            }
            return cache;
        }
        inline app::LocalDataStoreMgr__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreMgr__Class>(type_info(), "System", "LocalDataStoreMgr");
        }
        inline app::LocalDataStoreMgr* create() {
            return il2cpp::create_object<app::LocalDataStoreMgr>(get_class());
        }
    } // namespace LocalDataStoreMgr
} // namespace app::classes::types
