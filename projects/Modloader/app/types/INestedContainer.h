#pragma once
#include <Modloader/app/structs/INestedContainer.h>
#include <Modloader/app/structs/INestedContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INestedContainer {
        inline app::INestedContainer__Class** type_info() {
            static app::INestedContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::INestedContainer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::INestedContainer__Class* get_class() {
            return il2cpp::get_class<app::INestedContainer__Class>(type_info(), "System.ComponentModel", "INestedContainer");
        }
    } // namespace INestedContainer
} // namespace app::classes::types
