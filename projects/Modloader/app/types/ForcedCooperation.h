#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ForcedCooperation__Class.h>
#include <Modloader/app/structs/ForcedCooperation.h>

namespace app::classes::types {
    namespace ForcedCooperation {
        namespace {
            inline app::ForcedCooperation__Class* type_info_ref = nullptr;
        }
        inline app::ForcedCooperation__Class** type_info = &type_info_ref;
        inline app::ForcedCooperation__Class* get_class() {
            return il2cpp::get_class<app::ForcedCooperation__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation");
        }
        inline app::ForcedCooperation* create() {
            return il2cpp::create_object<app::ForcedCooperation>(get_class());
        }
    } // namespace ForcedCooperation
} // namespace app::classes::types
