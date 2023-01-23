#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkSourceSettingsArray__Class.h>
#include <Modloader/app/structs/AkSourceSettingsArray.h>

namespace app::classes::types {
    namespace AkSourceSettingsArray {
        namespace {
            inline app::AkSourceSettingsArray__Class* type_info_ref = nullptr;
        }
        inline app::AkSourceSettingsArray__Class** type_info = &type_info_ref;
        inline app::AkSourceSettingsArray__Class* get_class() {
            return il2cpp::get_class<app::AkSourceSettingsArray__Class>(type_info, "", "AkSourceSettingsArray");
        }
        inline app::AkSourceSettingsArray* create() {
            return il2cpp::create_object<app::AkSourceSettingsArray>(get_class());
        }
    } // namespace AkSourceSettingsArray
} // namespace app::classes::types
