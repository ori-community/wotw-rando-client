#pragma once
#include <Modloader/app/structs/ListOfCollidedObjects_c.h>
#include <Modloader/app/structs/ListOfCollidedObjects_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListOfCollidedObjects_c {
        inline app::ListOfCollidedObjects_c__Class** type_info() {
            static app::ListOfCollidedObjects_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListOfCollidedObjects_c__Class**)(modloader::win::memory::resolve_rva(0x04725108));
            }
            return cache;
        }
        inline app::ListOfCollidedObjects_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ListOfCollidedObjects_c__Class>(type_info(), "", "ListOfCollidedObjects", "<>c");
        }
        inline app::ListOfCollidedObjects_c* create() {
            return il2cpp::create_object<app::ListOfCollidedObjects_c>(get_class());
        }
    } // namespace ListOfCollidedObjects_c
} // namespace app::classes::types
