#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Member__Array {
        namespace {
            inline app::Member__Array__Class* type_info_ref = nullptr;
        }
        inline app::Member__Array__Class** type_info = &type_info_ref;
        inline app::Member__Array__Class* get_class() {
            return il2cpp::get_class<app::Member__Array__Class>(type_info, "PlayFab.PlayStreamModels", "Member[]");
        }
        inline app::Member__Array* create() {
            return il2cpp::create_object<app::Member__Array>(get_class());
        }
    } // namespace Member__Array
} // namespace app::classes::types
