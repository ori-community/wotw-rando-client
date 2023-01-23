#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StormZone__Class.h>
#include <Modloader/app/structs/StormZone.h>

namespace app::classes::types {
    namespace StormZone {
        namespace {
            inline app::StormZone__Class* type_info_ref = nullptr;
        }
        inline app::StormZone__Class** type_info = &type_info_ref;
        inline app::StormZone__Class* get_class() {
            return il2cpp::get_class<app::StormZone__Class>(type_info, "", "StormZone");
        }
        inline app::StormZone* create() {
            return il2cpp::create_object<app::StormZone>(get_class());
        }
    } // namespace StormZone
} // namespace app::classes::types
