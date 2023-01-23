#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NameIdentifier__Class.h>
#include <Modloader/app/structs/NameIdentifier.h>

namespace app::classes::types {
    namespace NameIdentifier {
        namespace {
            inline app::NameIdentifier__Class* type_info_ref = nullptr;
        }
        inline app::NameIdentifier__Class** type_info = &type_info_ref;
        inline app::NameIdentifier__Class* get_class() {
            return il2cpp::get_class<app::NameIdentifier__Class>(type_info, "PlayFab.PlayStreamModels", "NameIdentifier");
        }
        inline app::NameIdentifier* create() {
            return il2cpp::create_object<app::NameIdentifier>(get_class());
        }
    } // namespace NameIdentifier
} // namespace app::classes::types
