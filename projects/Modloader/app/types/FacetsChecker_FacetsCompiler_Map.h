#pragma once
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map__Array.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map__Boxed.h>
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler_Map__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacetsChecker_FacetsCompiler_Map {
        inline app::FacetsChecker_FacetsCompiler_Map__Class** type_info() {
            static app::FacetsChecker_FacetsCompiler_Map__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacetsChecker_FacetsCompiler_Map__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacetsChecker_FacetsCompiler_Map__Class* get_class() {
            return il2cpp::get_nested_class<app::FacetsChecker_FacetsCompiler_Map__Class>(type_info(), "System.Xml.Schema", "FacetsChecker+FacetsCompiler", "Map");
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
        inline app::FacetsChecker_FacetsCompiler_Map__Array* create_array(const std::vector<app::FacetsChecker_FacetsCompiler_Map>& items) {
            return il2cpp::array_new<app::FacetsChecker_FacetsCompiler_Map__Array>(get_class(), items);
        }
    } // namespace FacetsChecker_FacetsCompiler_Map
} // namespace app::classes::types
