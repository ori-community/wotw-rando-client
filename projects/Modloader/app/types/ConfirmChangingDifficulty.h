#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfirmChangingDifficulty__Class.h>
#include <Modloader/app/structs/ConfirmChangingDifficulty.h>

namespace app::classes::types {
    namespace ConfirmChangingDifficulty {
        namespace {
            inline app::ConfirmChangingDifficulty__Class* type_info_ref = nullptr;
        }
        inline app::ConfirmChangingDifficulty__Class** type_info = &type_info_ref;
        inline app::ConfirmChangingDifficulty__Class* get_class() {
            return il2cpp::get_class<app::ConfirmChangingDifficulty__Class>(type_info, "", "ConfirmChangingDifficulty");
        }
        inline app::ConfirmChangingDifficulty* create() {
            return il2cpp::create_object<app::ConfirmChangingDifficulty>(get_class());
        }
    } // namespace ConfirmChangingDifficulty
} // namespace app::classes::types
