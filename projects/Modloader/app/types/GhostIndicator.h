#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GhostIndicator__Class.h>
#include <Modloader/app/structs/GhostIndicator.h>

namespace app::classes::types {
    namespace GhostIndicator {
        namespace {
            inline app::GhostIndicator__Class* type_info_ref = nullptr;
        }
        inline app::GhostIndicator__Class** type_info = &type_info_ref;
        inline app::GhostIndicator__Class* get_class() {
            return il2cpp::get_class<app::GhostIndicator__Class>(type_info, "", "GhostIndicator");
        }
        inline app::GhostIndicator* create() {
            return il2cpp::create_object<app::GhostIndicator>(get_class());
        }
    } // namespace GhostIndicator
} // namespace app::classes::types
