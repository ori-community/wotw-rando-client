#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Targets_ConsumerList__Array__Class.h>
#include <Modloader/app/structs/Targets_ConsumerList__Array.h>

namespace app::classes::types {
    namespace Targets_ConsumerList__Array {
        namespace {
            inline app::Targets_ConsumerList__Array__Class* type_info_ref = nullptr;
        }
        inline app::Targets_ConsumerList__Array__Class** type_info = &type_info_ref;
        inline app::Targets_ConsumerList__Array__Class* get_class() {
            return il2cpp::get_class<app::Targets_ConsumerList__Array__Class>(type_info, "Game", "Targets+ConsumerList[]");
        }
        inline app::Targets_ConsumerList__Array* create() {
            return il2cpp::create_object<app::Targets_ConsumerList__Array>(get_class());
        }
    } // namespace Targets_ConsumerList__Array
} // namespace app::classes::types
