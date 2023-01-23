#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnScreenPositions__Class.h>
#include <Modloader/app/structs/OnScreenPositions.h>

namespace app::classes::types {
    namespace OnScreenPositions {
        namespace {
            inline app::OnScreenPositions__Class* type_info_ref = nullptr;
        }
        inline app::OnScreenPositions__Class** type_info = &type_info_ref;
        inline app::OnScreenPositions__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositions__Class>(type_info, "", "OnScreenPositions");
        }
        inline app::OnScreenPositions* create() {
            return il2cpp::create_object<app::OnScreenPositions>(get_class());
        }
    } // namespace OnScreenPositions
} // namespace app::classes::types
