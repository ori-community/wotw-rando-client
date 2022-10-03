#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler_Map {
        namespace {
            app::FacetsChecker_FacetsCompiler_Map__Class* type_info_ref = nullptr;
        }
        app::FacetsChecker_FacetsCompiler_Map__Class** type_info = &type_info_ref;
        inline app::FacetsChecker_FacetsCompiler_Map__Class* get_class() {
            return il2cpp::get_nested_class<app::FacetsChecker_FacetsCompiler_Map__Class>(type_info, "System.Xml.Schema", "FacetsChecker+FacetsCompiler", "Map");
        }
        inline app::FacetsChecker_FacetsCompiler_Map* create() {
            return il2cpp::create_object<app::FacetsChecker_FacetsCompiler_Map>(get_class());
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Boxed* box(app::FacetsChecker_FacetsCompiler_Map value) {
            return il2cpp::box_value<app::FacetsChecker_FacetsCompiler_Map__Boxed>(get_class(), value);
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Array* create_array(int size) {
            return il2cpp::array_new<app::FacetsChecker_FacetsCompiler_Map__Array>(get_class(), size);
        }
    } // namespace FacetsChecker_FacetsCompiler_Map
} // namespace app::classes::types
