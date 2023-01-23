#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour {
        namespace {
            inline app::PetrifiedOwlBossFinalComboBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossFinalComboBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFinalComboBehaviour__Class>(type_info, "", "PetrifiedOwlBossFinalComboBehaviour");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour
} // namespace app::classes::types
