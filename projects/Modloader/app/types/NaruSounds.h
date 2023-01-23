#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NaruSounds__Class.h>
#include <Modloader/app/structs/NaruSounds.h>

namespace app::classes::types {
    namespace NaruSounds {
        namespace {
            inline app::NaruSounds__Class* type_info_ref = nullptr;
        }
        inline app::NaruSounds__Class** type_info = &type_info_ref;
        inline app::NaruSounds__Class* get_class() {
            return il2cpp::get_class<app::NaruSounds__Class>(type_info, "", "NaruSounds");
        }
        inline app::NaruSounds* create() {
            return il2cpp::create_object<app::NaruSounds>(get_class());
        }
    } // namespace NaruSounds
} // namespace app::classes::types
