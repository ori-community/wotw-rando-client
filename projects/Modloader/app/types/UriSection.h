#pragma once
#include <Modloader/app/structs/UriSection.h>
#include <Modloader/app/structs/UriSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriSection {
        inline app::UriSection__Class** type_info() {
            static app::UriSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriSection__Class* get_class() {
            return il2cpp::get_class<app::UriSection__Class>(type_info(), "System.Configuration", "UriSection");
        }
        inline app::UriSection* create() {
            return il2cpp::create_object<app::UriSection>(get_class());
        }
    } // namespace UriSection
} // namespace app::classes::types
