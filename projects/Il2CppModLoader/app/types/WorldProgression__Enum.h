#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldProgression__Enum {
        namespace {
            app::WorldProgression__Enum__Class* type_info_ref = nullptr;
        }
        app::WorldProgression__Enum__Class** type_info = &type_info_ref;
        inline app::WorldProgression__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldProgression__Enum__Class>(type_info, "", "WorldProgression");
        }
        inline app::WorldProgression__Enum* create() {
            return il2cpp::create_object<app::WorldProgression__Enum>(get_class());
        }
    } // namespace WorldProgression__Enum
} // namespace app::classes::types
