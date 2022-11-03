#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InternalsVisibleToAttribute {
        namespace {
            inline app::InternalsVisibleToAttribute__Class* type_info_ref = nullptr;
        }
        inline app::InternalsVisibleToAttribute__Class** type_info = &type_info_ref;
        inline app::InternalsVisibleToAttribute__Class* get_class() {
            return il2cpp::get_class<app::InternalsVisibleToAttribute__Class>(type_info, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
        }
        inline app::InternalsVisibleToAttribute* create() {
            return il2cpp::create_object<app::InternalsVisibleToAttribute>(get_class());
        }
    } // namespace InternalsVisibleToAttribute
} // namespace app::classes::types
