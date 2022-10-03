#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceFinishIcon {
        namespace {
            app::RaceFinishIcon__Class* type_info_ref = nullptr;
        }
        app::RaceFinishIcon__Class** type_info = &type_info_ref;
        inline app::RaceFinishIcon__Class* get_class() {
            return il2cpp::get_class<app::RaceFinishIcon__Class>(type_info, "", "RaceFinishIcon");
        }
        inline app::RaceFinishIcon* create() {
            return il2cpp::create_object<app::RaceFinishIcon>(get_class());
        }
    } // namespace RaceFinishIcon
} // namespace app::classes::types
