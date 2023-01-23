#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration__Class.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>

namespace app::classes::types {
    namespace CharacterUpwardsDeceleration {
        namespace {
            inline app::CharacterUpwardsDeceleration__Class* type_info_ref = nullptr;
        }
        inline app::CharacterUpwardsDeceleration__Class** type_info = &type_info_ref;
        inline app::CharacterUpwardsDeceleration__Class* get_class() {
            return il2cpp::get_class<app::CharacterUpwardsDeceleration__Class>(type_info, "", "CharacterUpwardsDeceleration");
        }
        inline app::CharacterUpwardsDeceleration* create() {
            return il2cpp::create_object<app::CharacterUpwardsDeceleration>(get_class());
        }
    } // namespace CharacterUpwardsDeceleration
} // namespace app::classes::types
