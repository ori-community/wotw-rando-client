#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameAttribute {
        namespace {
            inline app::NameAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NameAttribute__Class** type_info = &type_info_ref;
        inline app::NameAttribute__Class* get_class() {
            return il2cpp::get_class<app::NameAttribute__Class>(type_info, "Moon.EffectsFramework", "NameAttribute");
        }
        inline app::NameAttribute* create() {
            return il2cpp::create_object<app::NameAttribute>(get_class());
        }
    } // namespace NameAttribute
} // namespace app::classes::types
