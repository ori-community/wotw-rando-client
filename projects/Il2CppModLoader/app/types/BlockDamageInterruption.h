#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruption {
        namespace {
            app::BlockDamageInterruption__Class* type_info_ref = nullptr;
        }
        app::BlockDamageInterruption__Class** type_info = &type_info_ref;
        inline app::BlockDamageInterruption__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruption__Class>(type_info, "Moon.Timeline", "BlockDamageInterruption");
        }
        inline app::BlockDamageInterruption* create() {
            return il2cpp::create_object<app::BlockDamageInterruption>(get_class());
        }
        inline app::BlockDamageInterruption__Array* create_array(int size) {
            return il2cpp::array_new<app::BlockDamageInterruption__Array>(get_class(), size);
        }
        inline app::BlockDamageInterruption__Array* create_array(const std::vector<app::BlockDamageInterruption*>& items) {
            return il2cpp::array_new<app::BlockDamageInterruption__Array>(get_class(), items);
        }
    } // namespace BlockDamageInterruption
} // namespace app::classes::types
