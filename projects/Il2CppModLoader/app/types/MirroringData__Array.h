#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroringData__Array {
        namespace {
            app::MirroringData__Array__Class* type_info_ref = nullptr;
        }
        app::MirroringData__Array__Class** type_info = &type_info_ref;
        inline app::MirroringData__Array__Class* get_class() {
            return il2cpp::get_class<app::MirroringData__Array__Class>(type_info, "", "MirroringData[]");
        }
        inline app::MirroringData__Array* create() {
            return il2cpp::create_object<app::MirroringData__Array>(get_class());
        }
    } // namespace MirroringData__Array
} // namespace app::classes::types
