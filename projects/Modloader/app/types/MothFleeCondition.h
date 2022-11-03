#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MothFleeCondition {
        namespace {
            inline app::MothFleeCondition__Class* type_info_ref = nullptr;
        }
        inline app::MothFleeCondition__Class** type_info = &type_info_ref;
        inline app::MothFleeCondition__Class* get_class() {
            return il2cpp::get_class<app::MothFleeCondition__Class>(type_info, "Moon.Behaviour", "MothFleeCondition");
        }
        inline app::MothFleeCondition* create() {
            return il2cpp::create_object<app::MothFleeCondition>(get_class());
        }
    } // namespace MothFleeCondition
} // namespace app::classes::types
