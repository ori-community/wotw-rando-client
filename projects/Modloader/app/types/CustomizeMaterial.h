#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CustomizeMaterial__Class.h>
#include <Modloader/app/structs/CustomizeMaterial.h>

namespace app::classes::types {
    namespace CustomizeMaterial {
        namespace {
            inline app::CustomizeMaterial__Class* type_info_ref = nullptr;
        }
        inline app::CustomizeMaterial__Class** type_info = &type_info_ref;
        inline app::CustomizeMaterial__Class* get_class() {
            return il2cpp::get_class<app::CustomizeMaterial__Class>(type_info, "", "CustomizeMaterial");
        }
        inline app::CustomizeMaterial* create() {
            return il2cpp::create_object<app::CustomizeMaterial>(get_class());
        }
    } // namespace CustomizeMaterial
} // namespace app::classes::types
