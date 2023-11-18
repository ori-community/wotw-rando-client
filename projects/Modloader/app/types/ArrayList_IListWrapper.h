#pragma once
#include <Modloader/app/structs/ArrayList_IListWrapper.h>
#include <Modloader/app/structs/ArrayList_IListWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayList_IListWrapper {
        inline app::ArrayList_IListWrapper__Class** type_info() {
            static app::ArrayList_IListWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrayList_IListWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C7F0));
            }
            return cache;
        }
        inline app::ArrayList_IListWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_IListWrapper__Class>(type_info(), "System.Collections", "ArrayList", "IListWrapper");
        }
        inline app::ArrayList_IListWrapper* create() {
            return il2cpp::create_object<app::ArrayList_IListWrapper>(get_class());
        }
    } // namespace ArrayList_IListWrapper
} // namespace app::classes::types
