#pragma once
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/FacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacetsChecker {
        inline app::FacetsChecker__Class** type_info() {
            static app::FacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacetsChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::FacetsChecker__Class>(type_info(), "System.Xml.Schema", "FacetsChecker");
        }
        inline app::FacetsChecker* create() {
            return il2cpp::create_object<app::FacetsChecker>(get_class());
        }
    } // namespace FacetsChecker
} // namespace app::classes::types
