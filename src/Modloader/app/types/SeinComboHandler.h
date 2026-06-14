#pragma once
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinComboHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinComboHandler {
        inline app::SeinComboHandler__Class** type_info() {
            static app::SeinComboHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinComboHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinComboHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinComboHandler__Class>(type_info(), "", "SeinComboHandler");
        }
        inline app::SeinComboHandler* create() {
            return il2cpp::create_object<app::SeinComboHandler>(get_class());
        }
    } // namespace SeinComboHandler
} // namespace app::classes::types
