#pragma once
#include <Modloader/app/structs/GuidConverter.h>
#include <Modloader/app/structs/GuidConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidConverter {
        inline app::GuidConverter__Class** type_info() {
            static app::GuidConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuidConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuidConverter__Class* get_class() {
            return il2cpp::get_class<app::GuidConverter__Class>(type_info(), "System.ComponentModel", "GuidConverter");
        }
        inline app::GuidConverter* create() {
            return il2cpp::create_object<app::GuidConverter>(get_class());
        }
    } // namespace GuidConverter
} // namespace app::classes::types
