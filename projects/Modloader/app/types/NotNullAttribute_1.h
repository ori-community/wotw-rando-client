#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotNullAttribute_1__Class.h>
#include <Modloader/app/structs/NotNullAttribute_1.h>

namespace app::classes::types {
    namespace NotNullAttribute_1 {
        namespace {
            inline app::NotNullAttribute_1__Class* type_info_ref = nullptr;
        }
        inline app::NotNullAttribute_1__Class** type_info = &type_info_ref;
        inline app::NotNullAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::NotNullAttribute_1__Class>(type_info, "JetBrains.Annotations", "NotNullAttribute");
        }
        inline app::NotNullAttribute_1* create() {
            return il2cpp::create_object<app::NotNullAttribute_1>(get_class());
        }
    } // namespace NotNullAttribute_1
} // namespace app::classes::types
