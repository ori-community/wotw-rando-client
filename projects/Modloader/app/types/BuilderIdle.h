#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderIdle {
        namespace {
            inline app::BuilderIdle__Class* type_info_ref = nullptr;
        }
        inline app::BuilderIdle__Class** type_info = &type_info_ref;
        inline app::BuilderIdle__Class* get_class() {
            return il2cpp::get_class<app::BuilderIdle__Class>(type_info, "", "BuilderIdle");
        }
        inline app::BuilderIdle* create() {
            return il2cpp::create_object<app::BuilderIdle>(get_class());
        }
    } // namespace BuilderIdle
} // namespace app::classes::types
