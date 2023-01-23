#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RectangleGameplayZone__Class.h>
#include <Modloader/app/structs/RectangleGameplayZone.h>

namespace app::classes::types {
    namespace RectangleGameplayZone {
        namespace {
            inline app::RectangleGameplayZone__Class* type_info_ref = nullptr;
        }
        inline app::RectangleGameplayZone__Class** type_info = &type_info_ref;
        inline app::RectangleGameplayZone__Class* get_class() {
            return il2cpp::get_class<app::RectangleGameplayZone__Class>(type_info, "", "RectangleGameplayZone");
        }
        inline app::RectangleGameplayZone* create() {
            return il2cpp::create_object<app::RectangleGameplayZone>(get_class());
        }
    } // namespace RectangleGameplayZone
} // namespace app::classes::types
