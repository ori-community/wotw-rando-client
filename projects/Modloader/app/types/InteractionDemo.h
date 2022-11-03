#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionDemo {
        namespace {
            inline app::InteractionDemo__Class* type_info_ref = nullptr;
        }
        inline app::InteractionDemo__Class** type_info = &type_info_ref;
        inline app::InteractionDemo__Class* get_class() {
            return il2cpp::get_class<app::InteractionDemo__Class>(type_info, "RootMotion.Demos", "InteractionDemo");
        }
        inline app::InteractionDemo* create() {
            return il2cpp::create_object<app::InteractionDemo>(get_class());
        }
    } // namespace InteractionDemo
} // namespace app::classes::types
