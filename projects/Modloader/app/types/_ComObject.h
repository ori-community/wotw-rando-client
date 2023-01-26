#pragma once
#include <Modloader/app/structs/_ComObject.h>
#include <Modloader/app/structs/_ComObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _ComObject {
        inline app::_ComObject__Class** type_info() {
            static app::_ComObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_ComObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_ComObject__Class* get_class() {
            return il2cpp::get_class<app::_ComObject__Class>(type_info(), "System", "__ComObject");
        }
        inline app::_ComObject* create() {
            return il2cpp::create_object<app::_ComObject>(get_class());
        }
    } // namespace _ComObject
} // namespace app::classes::types
