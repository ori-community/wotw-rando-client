#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesertEscapeWormPathFollower {
        namespace {
            app::DesertEscapeWormPathFollower__Class* type_info_ref = nullptr;
        }
        app::DesertEscapeWormPathFollower__Class** type_info = &type_info_ref;
        inline app::DesertEscapeWormPathFollower__Class* get_class() {
            return il2cpp::get_class<app::DesertEscapeWormPathFollower__Class>(type_info, "", "DesertEscapeWormPathFollower");
        }
        inline app::DesertEscapeWormPathFollower* create() {
            return il2cpp::create_object<app::DesertEscapeWormPathFollower>(get_class());
        }
    } // namespace DesertEscapeWormPathFollower
} // namespace app::classes::types
