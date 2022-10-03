#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWorm {
        namespace {
            app::DesertEscapeWorm__Class* type_info_ref = nullptr;
        }
        app::DesertEscapeWorm__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWorm__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWorm__Class>(type_info, "", "DesertEscapeWorm");
        }
        inline app::DesertEscapeWorm* create() {
            return il2cpp::create_object<app::DesertEscapeWorm>(get_class());
        }
    } // namespace DesertEscapeWorm
} // namespace app::classes::types
