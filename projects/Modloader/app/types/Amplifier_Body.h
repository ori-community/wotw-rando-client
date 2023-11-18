#pragma once
#include <Modloader/app/structs/Amplifier_Body.h>
#include <Modloader/app/structs/Amplifier_Body__Array.h>
#include <Modloader/app/structs/Amplifier_Body__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Amplifier_Body {
        inline app::Amplifier_Body__Class** type_info() {
            static app::Amplifier_Body__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Amplifier_Body__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Amplifier_Body__Class* get_class() {
            return il2cpp::get_nested_class<app::Amplifier_Body__Class>(type_info(), "RootMotion.FinalIK", "Amplifier", "Body");
        }
        inline app::Amplifier_Body* create() {
            return il2cpp::create_object<app::Amplifier_Body>(get_class());
        }
        inline app::Amplifier_Body__Array* create_array(int size) {
            return il2cpp::array_new<app::Amplifier_Body__Array>(get_class(), size);
        }
        inline app::Amplifier_Body__Array* create_array(const std::vector<app::Amplifier_Body*>& items) {
            return il2cpp::array_new<app::Amplifier_Body__Array>(get_class(), items);
        }
    } // namespace Amplifier_Body
} // namespace app::classes::types
