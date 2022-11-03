#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmplifyColorVolume {
        namespace {
            inline app::AmplifyColorVolume__Class* type_info_ref = nullptr;
        }
        inline app::AmplifyColorVolume__Class** type_info = &type_info_ref;
        inline app::AmplifyColorVolume__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorVolume__Class>(type_info, "", "AmplifyColorVolume");
        }
        inline app::AmplifyColorVolume* create() {
            return il2cpp::create_object<app::AmplifyColorVolume>(get_class());
        }
    } // namespace AmplifyColorVolume
} // namespace app::classes::types
