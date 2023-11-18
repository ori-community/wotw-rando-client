#pragma once
#include <Modloader/app/structs/_ConstructorInfo.h>
#include <Modloader/app/structs/_ConstructorInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _ConstructorInfo {
        inline app::_ConstructorInfo__Class** type_info() {
            static app::_ConstructorInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_ConstructorInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_ConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::_ConstructorInfo__Class>(type_info(), "System.Runtime.InteropServices", "_ConstructorInfo");
        }
    } // namespace _ConstructorInfo
} // namespace app::classes::types
