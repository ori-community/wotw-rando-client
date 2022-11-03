#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialProperties {
        namespace {
            inline app::MaterialProperties__Class* type_info_ref = nullptr;
        }
        inline app::MaterialProperties__Class** type_info = &type_info_ref;
        inline app::MaterialProperties__Class* get_class() {
            return il2cpp::get_class<app::MaterialProperties__Class>(type_info, "", "MaterialProperties");
        }
        inline app::MaterialProperties* create() {
            return il2cpp::create_object<app::MaterialProperties>(get_class());
        }
    } // namespace MaterialProperties
} // namespace app::classes::types
