#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _ComObject {
        namespace {
            inline app::_ComObject__Class* type_info_ref = nullptr;
        }
        inline app::_ComObject__Class** type_info = &type_info_ref;
        inline app::_ComObject__Class* get_class() {
            return il2cpp::get_class<app::_ComObject__Class>(type_info, "System", "__ComObject");
        }
        inline app::_ComObject* create() {
            return il2cpp::create_object<app::_ComObject>(get_class());
        }
    } // namespace _ComObject
} // namespace app::classes::types
