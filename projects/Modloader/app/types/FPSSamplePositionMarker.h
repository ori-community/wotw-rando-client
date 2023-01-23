#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSSamplePositionMarker__Class.h>
#include <Modloader/app/structs/FPSSamplePositionMarker.h>

namespace app::classes::types {
    namespace FPSSamplePositionMarker {
        namespace {
            inline app::FPSSamplePositionMarker__Class* type_info_ref = nullptr;
        }
        inline app::FPSSamplePositionMarker__Class** type_info = &type_info_ref;
        inline app::FPSSamplePositionMarker__Class* get_class() {
            return il2cpp::get_class<app::FPSSamplePositionMarker__Class>(type_info, "", "FPSSamplePositionMarker");
        }
        inline app::FPSSamplePositionMarker* create() {
            return il2cpp::create_object<app::FPSSamplePositionMarker>(get_class());
        }
    } // namespace FPSSamplePositionMarker
} // namespace app::classes::types
