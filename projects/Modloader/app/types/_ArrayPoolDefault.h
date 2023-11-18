#pragma once
#include <Modloader/app/structs/_ArrayPoolDefault.h>
#include <Modloader/app/structs/_ArrayPoolDefault__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolDefault {
        inline app::_ArrayPoolDefault__Class** type_info() {
            static app::_ArrayPoolDefault__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_ArrayPoolDefault__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_ArrayPoolDefault__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolDefault__Class>(type_info(), "", "_ArrayPoolDefault");
        }
        inline app::_ArrayPoolDefault* create() {
            return il2cpp::create_object<app::_ArrayPoolDefault>(get_class());
        }
    } // namespace _ArrayPoolDefault
} // namespace app::classes::types
