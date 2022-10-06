#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSkeetoDiveAttackBehaviour {
        namespace {
            app::KamikazeSkeetoDiveAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::KamikazeSkeetoDiveAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::KamikazeSkeetoDiveAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSkeetoDiveAttackBehaviour__Class>(type_info, "", "KamikazeSkeetoDiveAttackBehaviour");
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour* create() {
            return il2cpp::create_object<app::KamikazeSkeetoDiveAttackBehaviour>(get_class());
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::KamikazeSkeetoDiveAttackBehaviour__Array>(get_class(), size);
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array* create_array(const std::vector<app::KamikazeSkeetoDiveAttackBehaviour*>& items) {
            return il2cpp::array_new<app::KamikazeSkeetoDiveAttackBehaviour__Array>(get_class(), items);
        }
    } // namespace KamikazeSkeetoDiveAttackBehaviour
} // namespace app::classes::types
