#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HueFocus__Class.h>
#include <Modloader/app/structs/HueFocus.h>

namespace app::classes::types {
    namespace HueFocus {
        namespace {
            inline app::HueFocus__Class* type_info_ref = nullptr;
        }
        inline app::HueFocus__Class** type_info = &type_info_ref;
        inline app::HueFocus__Class* get_class() {
            return il2cpp::get_class<app::HueFocus__Class>(type_info, "Colorful", "HueFocus");
        }
        inline app::HueFocus* create() {
            return il2cpp::create_object<app::HueFocus>(get_class());
        }
    } // namespace HueFocus
} // namespace app::classes::types
