#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_.h>
#include <Modloader/app/structs/_PrivateImplementationDetails___Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_ {
        inline app::_PrivateImplementationDetails___Class** type_info() {
            static app::_PrivateImplementationDetails___Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails___Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails___Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails___Class>(type_info(), "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails_* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_>(get_class());
        }
    } // namespace _PrivateImplementationDetails_
} // namespace app::classes::types
