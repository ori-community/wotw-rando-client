#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveWithCondition {
        namespace {
            inline app::MoveWithCondition__Class* type_info_ref = nullptr;
        }
        inline app::MoveWithCondition__Class** type_info = &type_info_ref;
        inline app::MoveWithCondition__Class* get_class() {
            return il2cpp::get_class<app::MoveWithCondition__Class>(type_info, "", "MoveWithCondition");
        }
        inline app::MoveWithCondition* create() {
            return il2cpp::create_object<app::MoveWithCondition>(get_class());
        }
    } // namespace MoveWithCondition
} // namespace app::classes::types
