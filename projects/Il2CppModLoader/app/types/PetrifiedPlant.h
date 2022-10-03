#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedPlant {
        namespace {
            app::PetrifiedPlant__Class* type_info_ref = nullptr;
        }
        app::PetrifiedPlant__Class** type_info = &type_info_ref;
        inline app::PetrifiedPlant__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedPlant__Class>(type_info, "", "PetrifiedPlant");
        }
        inline app::PetrifiedPlant* create() {
            return il2cpp::create_object<app::PetrifiedPlant>(get_class());
        }
    } // namespace PetrifiedPlant
} // namespace app::classes::types
