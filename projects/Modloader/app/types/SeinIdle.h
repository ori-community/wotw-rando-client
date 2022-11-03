#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinIdle {
        namespace {
            inline app::SeinIdle__Class* type_info_ref = nullptr;
        }
        inline app::SeinIdle__Class** type_info = &type_info_ref;
        inline app::SeinIdle__Class* get_class() {
            return il2cpp::get_class<app::SeinIdle__Class>(type_info, "", "SeinIdle");
        }
        inline app::SeinIdle* create() {
            return il2cpp::create_object<app::SeinIdle>(get_class());
        }
    } // namespace SeinIdle
} // namespace app::classes::types
