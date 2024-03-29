#pragma once
#include <Modloader/app/structs/DeletedRowInaccessibleException.h>
#include <Modloader/app/structs/DeletedRowInaccessibleException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeletedRowInaccessibleException {
        inline app::DeletedRowInaccessibleException__Class** type_info() {
            static app::DeletedRowInaccessibleException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeletedRowInaccessibleException__Class**)(modloader::win::memory::resolve_rva(0x04736330));
            }
            return cache;
        }
        inline app::DeletedRowInaccessibleException__Class* get_class() {
            return il2cpp::get_class<app::DeletedRowInaccessibleException__Class>(type_info(), "System.Data", "DeletedRowInaccessibleException");
        }
        inline app::DeletedRowInaccessibleException* create() {
            return il2cpp::create_object<app::DeletedRowInaccessibleException>(get_class());
        }
    } // namespace DeletedRowInaccessibleException
} // namespace app::classes::types
