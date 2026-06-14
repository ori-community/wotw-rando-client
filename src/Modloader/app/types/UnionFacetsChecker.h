#pragma once
#include <Modloader/app/structs/UnionFacetsChecker.h>
#include <Modloader/app/structs/UnionFacetsChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnionFacetsChecker {
        inline app::UnionFacetsChecker__Class** type_info() {
            static app::UnionFacetsChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnionFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04718478));
            }
            return cache;
        }
        inline app::UnionFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::UnionFacetsChecker__Class>(type_info(), "System.Xml.Schema", "UnionFacetsChecker");
        }
        inline app::UnionFacetsChecker* create() {
            return il2cpp::create_object<app::UnionFacetsChecker>(get_class());
        }
    } // namespace UnionFacetsChecker
} // namespace app::classes::types
