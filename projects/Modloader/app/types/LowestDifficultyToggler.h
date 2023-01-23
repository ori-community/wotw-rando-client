#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LowestDifficultyToggler__Class.h>
#include <Modloader/app/structs/LowestDifficultyToggler.h>

namespace app::classes::types {
    namespace LowestDifficultyToggler {
        namespace {
            inline app::LowestDifficultyToggler__Class* type_info_ref = nullptr;
        }
        inline app::LowestDifficultyToggler__Class** type_info = &type_info_ref;
        inline app::LowestDifficultyToggler__Class* get_class() {
            return il2cpp::get_class<app::LowestDifficultyToggler__Class>(type_info, "", "LowestDifficultyToggler");
        }
        inline app::LowestDifficultyToggler* create() {
            return il2cpp::create_object<app::LowestDifficultyToggler>(get_class());
        }
    } // namespace LowestDifficultyToggler
} // namespace app::classes::types
