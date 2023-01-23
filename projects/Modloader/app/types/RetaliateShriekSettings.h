#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RetaliateShriekSettings__Class.h>
#include <Modloader/app/structs/RetaliateShriekSettings.h>

namespace app::classes::types {
    namespace RetaliateShriekSettings {
        namespace {
            inline app::RetaliateShriekSettings__Class* type_info_ref = nullptr;
        }
        inline app::RetaliateShriekSettings__Class** type_info = &type_info_ref;
        inline app::RetaliateShriekSettings__Class* get_class() {
            return il2cpp::get_class<app::RetaliateShriekSettings__Class>(type_info, "", "RetaliateShriekSettings");
        }
        inline app::RetaliateShriekSettings* create() {
            return il2cpp::create_object<app::RetaliateShriekSettings>(get_class());
        }
    } // namespace RetaliateShriekSettings
} // namespace app::classes::types
