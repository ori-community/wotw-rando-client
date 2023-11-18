#pragma once
#include <Modloader/app/structs/Targets_ConsumerList__Array.h>
#include <Modloader/app/structs/Targets_ConsumerList__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Targets_ConsumerList__Array {
        inline app::Targets_ConsumerList__Array__Class** type_info() {
            static app::Targets_ConsumerList__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Targets_ConsumerList__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Targets_ConsumerList__Array__Class* get_class() {
            return il2cpp::get_class<app::Targets_ConsumerList__Array__Class>(type_info(), "Game", "Targets+ConsumerList[]");
        }
        inline app::Targets_ConsumerList__Array* create() {
            return il2cpp::create_object<app::Targets_ConsumerList__Array>(get_class());
        }
    } // namespace Targets_ConsumerList__Array
} // namespace app::classes::types
