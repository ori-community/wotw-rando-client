#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnSeinNearExit__Class.h>
#include <Modloader/app/structs/OnSeinNearExit.h>

namespace app::classes::types {
    namespace OnSeinNearExit {
        namespace {
            inline app::OnSeinNearExit__Class* type_info_ref = nullptr;
        }
        inline app::OnSeinNearExit__Class** type_info = &type_info_ref;
        inline app::OnSeinNearExit__Class* get_class() {
            return il2cpp::get_class<app::OnSeinNearExit__Class>(type_info, "fsm.triggers", "OnSeinNearExit");
        }
        inline app::OnSeinNearExit* create() {
            return il2cpp::create_object<app::OnSeinNearExit>(get_class());
        }
    } // namespace OnSeinNearExit
} // namespace app::classes::types
