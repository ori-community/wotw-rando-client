#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Targets_ConsumerList__Array {
        namespace {
            app::Targets_ConsumerList__Array__Class* type_info_ref = nullptr;
        }
        app::Targets_ConsumerList__Array__Class** type_info = &type_info_ref;
        inline app::Targets_ConsumerList__Array__Class* get_class() {
            return il2cpp::get_class<app::Targets_ConsumerList__Array__Class>(type_info, "Game", "Targets+ConsumerList[]");
        }
        inline app::Targets_ConsumerList__Array* create() {
            return il2cpp::create_object<app::Targets_ConsumerList__Array>(get_class());
        }
    } // namespace Targets_ConsumerList__Array
} // namespace app::classes::types
