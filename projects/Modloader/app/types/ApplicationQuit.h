#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplicationQuit__Class.h>
#include <Modloader/app/structs/ApplicationQuit.h>

namespace app::classes::types {
    namespace ApplicationQuit {
        namespace {
            inline app::ApplicationQuit__Class* type_info_ref = nullptr;
        }
        inline app::ApplicationQuit__Class** type_info = &type_info_ref;
        inline app::ApplicationQuit__Class* get_class() {
            return il2cpp::get_class<app::ApplicationQuit__Class>(type_info, "RootMotion.Demos", "ApplicationQuit");
        }
        inline app::ApplicationQuit* create() {
            return il2cpp::create_object<app::ApplicationQuit>(get_class());
        }
    } // namespace ApplicationQuit
} // namespace app::classes::types
