#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlFireProjectilesBehaviour {
        namespace {
            inline app::PetrifiedOwlFireProjectilesBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlFireProjectilesBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFireProjectilesBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFireProjectilesBehaviour__Class>(type_info, "Moon", "PetrifiedOwlFireProjectilesBehaviour");
        }
        inline app::PetrifiedOwlFireProjectilesBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlFireProjectilesBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlFireProjectilesBehaviour
} // namespace app::classes::types
