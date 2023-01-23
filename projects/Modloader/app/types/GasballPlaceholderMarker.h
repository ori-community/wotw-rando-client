#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasballPlaceholderMarker__Class.h>
#include <Modloader/app/structs/GasballPlaceholderMarker.h>

namespace app::classes::types {
    namespace GasballPlaceholderMarker {
        namespace {
            inline app::GasballPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::GasballPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::GasballPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::GasballPlaceholderMarker__Class>(type_info, "", "GasballPlaceholderMarker");
        }
        inline app::GasballPlaceholderMarker* create() {
            return il2cpp::create_object<app::GasballPlaceholderMarker>(get_class());
        }
    } // namespace GasballPlaceholderMarker
} // namespace app::classes::types
