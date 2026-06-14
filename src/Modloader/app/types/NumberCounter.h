#pragma once
#include <Modloader/app/structs/NumberCounter.h>
#include <Modloader/app/structs/NumberCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NumberCounter {
        inline app::NumberCounter__Class** type_info() {
            static app::NumberCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NumberCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NumberCounter__Class* get_class() {
            return il2cpp::get_class<app::NumberCounter__Class>(type_info(), "", "NumberCounter");
        }
        inline app::NumberCounter* create() {
            return il2cpp::create_object<app::NumberCounter>(get_class());
        }
    } // namespace NumberCounter
} // namespace app::classes::types
