#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowWorldMapAction__Class.h>
#include <Modloader/app/structs/ShowWorldMapAction.h>

namespace app::classes::types {
    namespace ShowWorldMapAction {
        namespace {
            inline app::ShowWorldMapAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowWorldMapAction__Class** type_info = &type_info_ref;
        inline app::ShowWorldMapAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWorldMapAction__Class>(type_info, "", "ShowWorldMapAction");
        }
        inline app::ShowWorldMapAction* create() {
            return il2cpp::create_object<app::ShowWorldMapAction>(get_class());
        }
    } // namespace ShowWorldMapAction
} // namespace app::classes::types
