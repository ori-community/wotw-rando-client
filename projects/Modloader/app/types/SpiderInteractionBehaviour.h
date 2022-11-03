#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderInteractionBehaviour {
        namespace {
            inline app::SpiderInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderInteractionBehaviour__Class>(type_info, "", "SpiderInteractionBehaviour");
        }
        inline app::SpiderInteractionBehaviour* create() {
            return il2cpp::create_object<app::SpiderInteractionBehaviour>(get_class());
        }
    } // namespace SpiderInteractionBehaviour
} // namespace app::classes::types
