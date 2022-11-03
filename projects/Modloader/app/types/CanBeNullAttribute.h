#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanBeNullAttribute {
        namespace {
            inline app::CanBeNullAttribute__Class* type_info_ref = nullptr;
        }
        inline app::CanBeNullAttribute__Class** type_info = &type_info_ref;
        inline app::CanBeNullAttribute__Class* get_class() {
            return il2cpp::get_class<app::CanBeNullAttribute__Class>(type_info, "JetBrains.Annotations", "CanBeNullAttribute");
        }
        inline app::CanBeNullAttribute* create() {
            return il2cpp::create_object<app::CanBeNullAttribute>(get_class());
        }
    } // namespace CanBeNullAttribute
} // namespace app::classes::types
