#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlShakeOffBehaviour {
        namespace {
            inline app::PetrifiedOwlShakeOffBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlShakeOffBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlShakeOffBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlShakeOffBehaviour__Class>(type_info, "Moon", "PetrifiedOwlShakeOffBehaviour");
        }
        inline app::PetrifiedOwlShakeOffBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlShakeOffBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlShakeOffBehaviour
} // namespace app::classes::types
