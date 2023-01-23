#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UploadHandler__Class.h>
#include <Modloader/app/structs/UploadHandler.h>

namespace app::classes::types {
    namespace UploadHandler {
        namespace {
            inline app::UploadHandler__Class* type_info_ref = nullptr;
        }
        inline app::UploadHandler__Class** type_info = &type_info_ref;
        inline app::UploadHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadHandler__Class>(type_info, "UnityEngine.Networking", "UploadHandler");
        }
        inline app::UploadHandler* create() {
            return il2cpp::create_object<app::UploadHandler>(get_class());
        }
    } // namespace UploadHandler
} // namespace app::classes::types
