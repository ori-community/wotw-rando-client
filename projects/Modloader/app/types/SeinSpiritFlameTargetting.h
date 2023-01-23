#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinSpiritFlameTargetting__Class.h>
#include <Modloader/app/structs/SeinSpiritFlameTargetting.h>

namespace app::classes::types {
    namespace SeinSpiritFlameTargetting {
        namespace {
            inline app::SeinSpiritFlameTargetting__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritFlameTargetting__Class** type_info = &type_info_ref;
        inline app::SeinSpiritFlameTargetting__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlameTargetting__Class>(type_info, "", "SeinSpiritFlameTargetting");
        }
        inline app::SeinSpiritFlameTargetting* create() {
            return il2cpp::create_object<app::SeinSpiritFlameTargetting>(get_class());
        }
    } // namespace SeinSpiritFlameTargetting
} // namespace app::classes::types
