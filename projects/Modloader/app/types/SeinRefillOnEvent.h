#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinRefillOnEvent__Class.h>
#include <Modloader/app/structs/SeinRefillOnEvent.h>

namespace app::classes::types {
    namespace SeinRefillOnEvent {
        namespace {
            inline app::SeinRefillOnEvent__Class* type_info_ref = nullptr;
        }
        inline app::SeinRefillOnEvent__Class** type_info = &type_info_ref;
        inline app::SeinRefillOnEvent__Class* get_class() {
            return il2cpp::get_class<app::SeinRefillOnEvent__Class>(type_info, "", "SeinRefillOnEvent");
        }
        inline app::SeinRefillOnEvent* create() {
            return il2cpp::create_object<app::SeinRefillOnEvent>(get_class());
        }
    } // namespace SeinRefillOnEvent
} // namespace app::classes::types
