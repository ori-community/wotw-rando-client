#pragma once
#include <Modloader/app/structs/IgnoreSection.h>
#include <Modloader/app/structs/IgnoreSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreSection {
        inline app::IgnoreSection__Class** type_info() {
            static app::IgnoreSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreSection__Class* get_class() {
            return il2cpp::get_class<app::IgnoreSection__Class>(type_info(), "System.Configuration", "IgnoreSection");
        }
        inline app::IgnoreSection* create() {
            return il2cpp::create_object<app::IgnoreSection>(get_class());
        }
    } // namespace IgnoreSection
} // namespace app::classes::types
