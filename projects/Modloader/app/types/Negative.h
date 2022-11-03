#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Negative {
        namespace {
            inline app::Negative__Class* type_info_ref = nullptr;
        }
        inline app::Negative__Class** type_info = &type_info_ref;
        inline app::Negative__Class* get_class() {
            return il2cpp::get_class<app::Negative__Class>(type_info, "Colorful", "Negative");
        }
        inline app::Negative* create() {
            return il2cpp::create_object<app::Negative>(get_class());
        }
    } // namespace Negative
} // namespace app::classes::types
