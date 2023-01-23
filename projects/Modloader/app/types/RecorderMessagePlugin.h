#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecorderMessagePlugin__Class.h>
#include <Modloader/app/structs/RecorderMessagePlugin.h>

namespace app::classes::types {
    namespace RecorderMessagePlugin {
        namespace {
            inline app::RecorderMessagePlugin__Class* type_info_ref = nullptr;
        }
        inline app::RecorderMessagePlugin__Class** type_info = &type_info_ref;
        inline app::RecorderMessagePlugin__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessagePlugin__Class>(type_info, "", "RecorderMessagePlugin");
        }
        inline app::RecorderMessagePlugin* create() {
            return il2cpp::create_object<app::RecorderMessagePlugin>(get_class());
        }
    } // namespace RecorderMessagePlugin
} // namespace app::classes::types
