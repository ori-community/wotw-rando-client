#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlagsAttribute {
        namespace {
            inline app::FlagsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::FlagsAttribute__Class** type_info = &type_info_ref;
        inline app::FlagsAttribute__Class* get_class() {
            return il2cpp::get_class<app::FlagsAttribute__Class>(type_info, "System", "FlagsAttribute");
        }
        inline app::FlagsAttribute* create() {
            return il2cpp::create_object<app::FlagsAttribute>(get_class());
        }
    } // namespace FlagsAttribute
} // namespace app::classes::types
