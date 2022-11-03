#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bubble {
        namespace {
            inline app::Bubble__Class* type_info_ref = nullptr;
        }
        inline app::Bubble__Class** type_info = &type_info_ref;
        inline app::Bubble__Class* get_class() {
            return il2cpp::get_class<app::Bubble__Class>(type_info, "", "Bubble");
        }
        inline app::Bubble* create() {
            return il2cpp::create_object<app::Bubble>(get_class());
        }
    } // namespace Bubble
} // namespace app::classes::types
