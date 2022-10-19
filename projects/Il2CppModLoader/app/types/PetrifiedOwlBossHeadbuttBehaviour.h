#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossHeadbuttBehaviour {
        namespace {
            inline app::PetrifiedOwlBossHeadbuttBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossHeadbuttBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossHeadbuttBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossHeadbuttBehaviour__Class>(type_info, "", "PetrifiedOwlBossHeadbuttBehaviour");
        }
        inline app::PetrifiedOwlBossHeadbuttBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossHeadbuttBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossHeadbuttBehaviour
} // namespace app::classes::types
