#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaapiJsonUnregisterObjArgs__Class.h>
#include <Modloader/app/structs/WaapiJsonUnregisterObjArgs.h>

namespace app::classes::types {
    namespace WaapiJsonUnregisterObjArgs {
        namespace {
            inline app::WaapiJsonUnregisterObjArgs__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonUnregisterObjArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonUnregisterObjArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonUnregisterObjArgs__Class>(type_info, "", "WaapiJsonUnregisterObjArgs");
        }
        inline app::WaapiJsonUnregisterObjArgs* create() {
            return il2cpp::create_object<app::WaapiJsonUnregisterObjArgs>(get_class());
        }
    } // namespace WaapiJsonUnregisterObjArgs
} // namespace app::classes::types
