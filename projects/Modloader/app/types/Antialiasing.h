#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Antialiasing__Class.h>
#include <Modloader/app/structs/Antialiasing.h>
#include <Modloader/app/structs/AntiAliasing__Class.h>
#include <Modloader/app/structs/AntiAliasing.h>

namespace app::classes::types {
    namespace Antialiasing {
        namespace {
            inline app::Antialiasing__Class* type_info_ref = nullptr;
        }
        inline app::Antialiasing__Class** type_info = &type_info_ref;
        inline app::Antialiasing__Class* get_class() {
            return il2cpp::get_class<app::Antialiasing__Class>(type_info, "UnityStandardAssets.ImageEffects", "Antialiasing");
        }
        inline app::Antialiasing* create() {
            return il2cpp::create_object<app::Antialiasing>(get_class());
        }
    } // namespace Antialiasing
} // namespace app::classes::types
#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
