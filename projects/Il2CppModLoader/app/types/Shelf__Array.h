#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Shelf__Array {
        namespace {
            app::Shelf__Array__Class* type_info_ref = nullptr;
        }
        app::Shelf__Array__Class** type_info = &type_info_ref;
        inline app::Shelf__Array__Class* get_class() {
            return il2cpp::get_class<app::Shelf__Array__Class>(type_info, "", "Shelf[]");
        }
        inline app::Shelf__Array* create() {
            return il2cpp::create_object<app::Shelf__Array>(get_class());
        }
    } // namespace Shelf__Array
} // namespace app::classes::types
