#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetupStateModifier__Array {
        namespace {
            inline app::SetupStateModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::SetupStateModifier__Array__Class** type_info = &type_info_ref;
        inline app::SetupStateModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifier__Array__Class>(type_info, "", "SetupStateModifier[]");
        }
        inline app::SetupStateModifier__Array* create() {
            return il2cpp::create_object<app::SetupStateModifier__Array>(get_class());
        }
    } // namespace SetupStateModifier__Array
} // namespace app::classes::types
