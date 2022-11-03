#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PullablePole {
        namespace {
            inline app::PullablePole__Class* type_info_ref = nullptr;
        }
        inline app::PullablePole__Class** type_info = &type_info_ref;
        inline app::PullablePole__Class* get_class() {
            return il2cpp::get_class<app::PullablePole__Class>(type_info, "Game", "PullablePole");
        }
        inline app::PullablePole* create() {
            return il2cpp::create_object<app::PullablePole>(get_class());
        }
    } // namespace PullablePole
} // namespace app::classes::types
