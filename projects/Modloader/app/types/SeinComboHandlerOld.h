#pragma once
#include <Modloader/app/structs/SeinComboHandlerOld.h>
#include <Modloader/app/structs/SeinComboHandlerOld__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinComboHandlerOld {
        inline app::SeinComboHandlerOld__Class** type_info() {
            static app::SeinComboHandlerOld__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinComboHandlerOld__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinComboHandlerOld__Class* get_class() {
            return il2cpp::get_class<app::SeinComboHandlerOld__Class>(type_info(), "", "SeinComboHandlerOld");
        }
        inline app::SeinComboHandlerOld* create() {
            return il2cpp::create_object<app::SeinComboHandlerOld>(get_class());
        }
    } // namespace SeinComboHandlerOld
} // namespace app::classes::types
