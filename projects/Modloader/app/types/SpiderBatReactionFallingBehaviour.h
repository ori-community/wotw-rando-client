#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBatReactionFallingBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBatReactionFallingBehaviour.h>

namespace app::classes::types {
    namespace SpiderBatReactionFallingBehaviour {
        namespace {
            inline app::SpiderBatReactionFallingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBatReactionFallingBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBatReactionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatReactionFallingBehaviour__Class>(type_info, "", "SpiderBatReactionFallingBehaviour");
        }
        inline app::SpiderBatReactionFallingBehaviour* create() {
            return il2cpp::create_object<app::SpiderBatReactionFallingBehaviour>(get_class());
        }
    } // namespace SpiderBatReactionFallingBehaviour
} // namespace app::classes::types
