#pragma once
#include <Modloader/app/structs/_DTString.h>
#include <Modloader/app/structs/_DTString__Boxed.h>
#include <Modloader/app/structs/_DTString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _DTString {
        inline app::_DTString__Class** type_info() {
            static app::_DTString__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::_DTString__Class**)(modloader::win::memory::resolve_rva(0x0473B080));
            }
            return cache;
        }
        inline app::_DTString__Class* get_class() {
            return il2cpp::get_class<app::_DTString__Class>(type_info(), "System", "__DTString");
        }
        inline app::_DTString* create() {
            return il2cpp::create_object<app::_DTString>(get_class());
        }
        inline app::_DTString__Boxed* box(app::_DTString value) {
            return il2cpp::box_value<app::_DTString__Boxed>(get_class(), value);
        }
    } // namespace _DTString
} // namespace app::classes::types
