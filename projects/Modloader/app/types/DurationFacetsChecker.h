#pragma once
#include <Modloader/app/structs/DurationFacetsChecker.h>
#include <Modloader/app/structs/DurationFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DurationFacetsChecker {
        inline app::DurationFacetsChecker__Class** type_info() {
            static app::DurationFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DurationFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x0474CC78));
            }
            return cache;
        }
        inline app::DurationFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::DurationFacetsChecker__Class>(type_info(), "System.Xml.Schema", "DurationFacetsChecker");
        }
        inline app::DurationFacetsChecker* create() {
            return il2cpp::create_object<app::DurationFacetsChecker>(get_class());
        }
    } // namespace DurationFacetsChecker
} // namespace app::classes::types
