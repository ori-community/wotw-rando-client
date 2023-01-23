#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BabySeinSounds__Class.h>
#include <Modloader/app/structs/BabySeinSounds.h>

namespace app::classes::types {
    namespace BabySeinSounds {
        namespace {
            inline app::BabySeinSounds__Class* type_info_ref = nullptr;
        }
        inline app::BabySeinSounds__Class** type_info = &type_info_ref;
        inline app::BabySeinSounds__Class* get_class() {
            return il2cpp::get_class<app::BabySeinSounds__Class>(type_info, "", "BabySeinSounds");
        }
        inline app::BabySeinSounds* create() {
            return il2cpp::create_object<app::BabySeinSounds>(get_class());
        }
    } // namespace BabySeinSounds
} // namespace app::classes::types
