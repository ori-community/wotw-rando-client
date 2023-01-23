#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerTransform__Class.h>
#include <Modloader/app/structs/ServerTransform.h>

namespace app::classes::types {
    namespace ServerTransform {
        namespace {
            inline app::ServerTransform__Class* type_info_ref = nullptr;
        }
        inline app::ServerTransform__Class** type_info = &type_info_ref;
        inline app::ServerTransform__Class* get_class() {
            return il2cpp::get_class<app::ServerTransform__Class>(type_info, "", "ServerTransform");
        }
        inline app::ServerTransform* create() {
            return il2cpp::create_object<app::ServerTransform>(get_class());
        }
    } // namespace ServerTransform
} // namespace app::classes::types
