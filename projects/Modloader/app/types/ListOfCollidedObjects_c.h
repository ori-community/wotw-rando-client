#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListOfCollidedObjects_c {
        inline app::ListOfCollidedObjects_c__Class** type_info = (app::ListOfCollidedObjects_c__Class**)(modloader::win::memory::resolve_rva(0x04725108));
        inline app::ListOfCollidedObjects_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ListOfCollidedObjects_c__Class>(type_info, "", "ListOfCollidedObjects", "<>c");
        }
        inline app::ListOfCollidedObjects_c* create() {
            return il2cpp::create_object<app::ListOfCollidedObjects_c>(get_class());
        }
    } // namespace ListOfCollidedObjects_c
} // namespace app::classes::types
