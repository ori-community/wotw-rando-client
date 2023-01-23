#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlStompBehaviour {
        namespace {
            inline app::PetrifiedOwlStompBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlStompBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlStompBehaviour__Class>(type_info, "Moon", "PetrifiedOwlStompBehaviour");
        }
        inline app::PetrifiedOwlStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlStompBehaviour
} // namespace app::classes::types
