#pragma once
#include <Modloader/app/structs/ValueWithMaxValueSerializer.h>
#include <Modloader/app/structs/ValueWithMaxValueSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValueWithMaxValueSerializer {
        inline app::ValueWithMaxValueSerializer__Class** type_info() {
            static app::ValueWithMaxValueSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValueWithMaxValueSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValueWithMaxValueSerializer__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValueSerializer__Class>(type_info(), "", "ValueWithMaxValueSerializer");
        }
        inline app::ValueWithMaxValueSerializer* create() {
            return il2cpp::create_object<app::ValueWithMaxValueSerializer>(get_class());
        }
    } // namespace ValueWithMaxValueSerializer
} // namespace app::classes::types
