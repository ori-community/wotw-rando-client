#pragma once
#include <Modloader/app/structs/BlockDamageInterruption.h>
#include <Modloader/app/structs/BlockDamageInterruption__Array.h>
#include <Modloader/app/structs/BlockDamageInterruption__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruption {
        inline app::BlockDamageInterruption__Class** type_info() {
            static app::BlockDamageInterruption__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockDamageInterruption__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockDamageInterruption__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruption__Class>(type_info(), "Moon.Timeline", "BlockDamageInterruption");
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
