#pragma once
#include <Modloader/app/structs/InternalDataCollectionBase.h>
#include <Modloader/app/structs/InternalDataCollectionBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalDataCollectionBase {
        inline app::InternalDataCollectionBase__Class** type_info() {
            static app::InternalDataCollectionBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalDataCollectionBase__Class**)(modloader::win::memory::resolve_rva(0x04779AB0));
            }
            return cache;
        }
        inline app::InternalDataCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::InternalDataCollectionBase__Class>(type_info(), "System.Data", "InternalDataCollectionBase");
        }
        inline app::InternalDataCollectionBase* create() {
            return il2cpp::create_object<app::InternalDataCollectionBase>(get_class());
        }
    } // namespace InternalDataCollectionBase
} // namespace app::classes::types
