#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnFixedUpdate__Class.h>
#include <Modloader/app/structs/OnFixedUpdate.h>

namespace app::classes::types {
    namespace OnFixedUpdate {
        namespace {
            inline app::OnFixedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::OnFixedUpdate__Class** type_info = &type_info_ref;
        inline app::OnFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate__Class>(type_info, "Moon.InteractionGraph", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate* create() {
            return il2cpp::create_object<app::OnFixedUpdate>(get_class());
        }
    } // namespace OnFixedUpdate
} // namespace app::classes::types
