#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoNestPlaceholderMarker__Class.h>
#include <Modloader/app/structs/SkeetoNestPlaceholderMarker.h>

namespace app::classes::types {
    namespace SkeetoNestPlaceholderMarker {
        namespace {
            inline app::SkeetoNestPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoNestPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::SkeetoNestPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestPlaceholderMarker__Class>(type_info, "", "SkeetoNestPlaceholderMarker");
        }
        inline app::SkeetoNestPlaceholderMarker* create() {
            return il2cpp::create_object<app::SkeetoNestPlaceholderMarker>(get_class());
        }
    } // namespace SkeetoNestPlaceholderMarker
} // namespace app::classes::types
