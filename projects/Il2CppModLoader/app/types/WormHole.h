#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormHole {
        namespace {
            inline app::WormHole__Class* type_info_ref = nullptr;
        }
        inline app::WormHole__Class** type_info = &type_info_ref;
        inline app::WormHole__Class* get_class() {
            return il2cpp::get_class<app::WormHole__Class>(type_info, "", "WormHole");
        }
        inline app::WormHole* create() {
            return il2cpp::create_object<app::WormHole>(get_class());
        }
        inline app::WormHole__Array* create_array(int size) {
            return il2cpp::array_new<app::WormHole__Array>(get_class(), size);
        }
        inline app::WormHole__Array* create_array(const std::vector<app::WormHole*>& items) {
            return il2cpp::array_new<app::WormHole__Array>(get_class(), items);
        }
    } // namespace WormHole
} // namespace app::classes::types
