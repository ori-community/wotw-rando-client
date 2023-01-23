#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDoorHandler__Class.h>
#include <Modloader/app/structs/SeinDoorHandler.h>

namespace app::classes::types {
    namespace SeinDoorHandler {
        namespace {
            inline app::SeinDoorHandler__Class* type_info_ref = nullptr;
        }
        inline app::SeinDoorHandler__Class** type_info = &type_info_ref;
        inline app::SeinDoorHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinDoorHandler__Class>(type_info, "", "SeinDoorHandler");
        }
        inline app::SeinDoorHandler* create() {
            return il2cpp::create_object<app::SeinDoorHandler>(get_class());
        }
    } // namespace SeinDoorHandler
} // namespace app::classes::types
