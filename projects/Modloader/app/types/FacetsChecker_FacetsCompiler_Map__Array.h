#pragma once
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map__Array.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler_Map__Array {
        inline app::FacetsChecker_FacetsCompiler_Map__Array__Class** type_info() {
            static app::FacetsChecker_FacetsCompiler_Map__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FacetsChecker_FacetsCompiler_Map__Array__Class**)(modloader::win::memory::resolve_rva(0x04754270));
            }
            return cache;
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Array__Class* get_class() {
            return il2cpp::get_class<app::FacetsChecker_FacetsCompiler_Map__Array__Class>(type_info(), "System.Xml.Schema", "FacetsChecker+FacetsCompiler+Map[]");
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Array* create() {
            return il2cpp::create_object<app::FacetsChecker_FacetsCompiler_Map__Array>(get_class());
        }
    } // namespace FacetsChecker_FacetsCompiler_Map__Array
} // namespace app::classes::types
