#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails__4.h>
#include <Modloader/app/structs/_PrivateImplementationDetails__4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails__4 {
        inline app::_PrivateImplementationDetails__4__Class** type_info() {
            static app::_PrivateImplementationDetails__4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails__4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails__4__Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails__4__Class>(type_info(), "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails__4* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails__4>(get_class());
        }
    } // namespace _PrivateImplementationDetails__4
} // namespace app::classes::types
