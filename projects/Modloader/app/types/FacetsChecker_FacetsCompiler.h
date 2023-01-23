#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler__Class.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler__Boxed.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler {
        inline app::FacetsChecker_FacetsCompiler__Class** type_info = (app::FacetsChecker_FacetsCompiler__Class**)(modloader::win::memory::resolve_rva(0x047436B0));
        inline app::FacetsChecker_FacetsCompiler__Class* get_class() {
            return il2cpp::get_nested_class<app::FacetsChecker_FacetsCompiler__Class>(type_info, "System.Xml.Schema", "FacetsChecker", "FacetsCompiler");
        }
        inline app::FacetsChecker_FacetsCompiler* create() {
            return il2cpp::create_object<app::FacetsChecker_FacetsCompiler>(get_class());
        }
        inline app::FacetsChecker_FacetsCompiler__Boxed* box(app::FacetsChecker_FacetsCompiler value) {
            return il2cpp::box_value<app::FacetsChecker_FacetsCompiler__Boxed>(get_class(), value);
        }
    } // namespace FacetsChecker_FacetsCompiler
} // namespace app::classes::types
