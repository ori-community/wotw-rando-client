#pragma once
#include <Modloader/app/structs/ListFacetsChecker.h>
#include <Modloader/app/structs/ListFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListFacetsChecker {
        inline app::ListFacetsChecker__Class** type_info() {
            static app::ListFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04779598));
            }
            return cache;
        }
        inline app::ListFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::ListFacetsChecker__Class>(type_info(), "System.Xml.Schema", "ListFacetsChecker");
        }
        inline app::ListFacetsChecker* create() {
            return il2cpp::create_object<app::ListFacetsChecker>(get_class());
        }
    } // namespace ListFacetsChecker
} // namespace app::classes::types
