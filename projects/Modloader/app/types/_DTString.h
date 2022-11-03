#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _DTString {
        inline app::_DTString__Class** type_info = (app::_DTString__Class**)(modloader::win::memory::resolve_rva(0x0473B080));
        inline app::_DTString__Class* get_class() {
            return il2cpp::get_class<app::_DTString__Class>(type_info, "System", "__DTString");
        }
        inline app::_DTString* create() {
            return il2cpp::create_object<app::_DTString>(get_class());
        }
        inline app::_DTString__Boxed* box(app::_DTString value) {
            return il2cpp::box_value<app::_DTString__Boxed>(get_class(), value);
        }
    } // namespace _DTString
} // namespace app::classes::types
