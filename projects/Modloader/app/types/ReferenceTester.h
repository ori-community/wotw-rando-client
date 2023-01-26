#pragma once
#include <Modloader/app/structs/ReferenceTester.h>
#include <Modloader/app/structs/ReferenceTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReferenceTester {
        inline app::ReferenceTester__Class** type_info() {
            static app::ReferenceTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReferenceTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReferenceTester__Class* get_class() {
            return il2cpp::get_class<app::ReferenceTester__Class>(type_info(), "", "ReferenceTester");
        }
        inline app::ReferenceTester* create() {
            return il2cpp::create_object<app::ReferenceTester>(get_class());
        }
    } // namespace ReferenceTester
} // namespace app::classes::types
