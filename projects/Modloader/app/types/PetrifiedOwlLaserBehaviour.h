#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlLaserBehaviour {
        namespace {
            inline app::PetrifiedOwlLaserBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlLaserBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLaserBehaviour__Class>(type_info, "Moon", "PetrifiedOwlLaserBehaviour");
        }
        inline app::PetrifiedOwlLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlLaserBehaviour
} // namespace app::classes::types
