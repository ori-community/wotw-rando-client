#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array {
        namespace {
            inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class* type_info_ref = nullptr;
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class** type_info = &type_info_ref;
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class>(type_info, "Moon", "NewSetupStateControllerResolver+IRuntimeUberStateControllerDataLink[]");
        }
        inline app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array
} // namespace app::classes::types
