#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxRecorder__Class.h>
#include <Modloader/app/structs/XboxRecorder.h>

namespace app::classes::types {
    namespace XboxRecorder {
        namespace {
            inline app::XboxRecorder__Class* type_info_ref = nullptr;
        }
        inline app::XboxRecorder__Class** type_info = &type_info_ref;
        inline app::XboxRecorder__Class* get_class() {
            return il2cpp::get_class<app::XboxRecorder__Class>(type_info, "", "XboxRecorder");
        }
        inline app::XboxRecorder* create() {
            return il2cpp::create_object<app::XboxRecorder>(get_class());
        }
    } // namespace XboxRecorder
} // namespace app::classes::types
