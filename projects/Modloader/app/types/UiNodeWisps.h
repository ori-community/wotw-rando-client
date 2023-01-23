#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UiNodeWisps__Class.h>
#include <Modloader/app/structs/UiNodeWisps.h>

namespace app::classes::types {
    namespace UiNodeWisps {
        namespace {
            inline app::UiNodeWisps__Class* type_info_ref = nullptr;
        }
        inline app::UiNodeWisps__Class** type_info = &type_info_ref;
        inline app::UiNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::UiNodeWisps__Class>(type_info, "", "UiNodeWisps");
        }
        inline app::UiNodeWisps* create() {
            return il2cpp::create_object<app::UiNodeWisps>(get_class());
        }
    } // namespace UiNodeWisps
} // namespace app::classes::types
