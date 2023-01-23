#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Fader__Class.h>
#include <Modloader/app/structs/Fader.h>

namespace app::classes::types {
    namespace Fader {
        namespace {
            inline app::Fader__Class* type_info_ref = nullptr;
        }
        inline app::Fader__Class** type_info = &type_info_ref;
        inline app::Fader__Class* get_class() {
            return il2cpp::get_class<app::Fader__Class>(type_info, "", "Fader");
        }
        inline app::Fader* create() {
            return il2cpp::create_object<app::Fader>(get_class());
        }
    } // namespace Fader
} // namespace app::classes::types
