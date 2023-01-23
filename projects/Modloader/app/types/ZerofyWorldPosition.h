#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ZerofyWorldPosition__Class.h>
#include <Modloader/app/structs/ZerofyWorldPosition.h>

namespace app::classes::types {
    namespace ZerofyWorldPosition {
        namespace {
            inline app::ZerofyWorldPosition__Class* type_info_ref = nullptr;
        }
        inline app::ZerofyWorldPosition__Class** type_info = &type_info_ref;
        inline app::ZerofyWorldPosition__Class* get_class() {
            return il2cpp::get_class<app::ZerofyWorldPosition__Class>(type_info, "", "ZerofyWorldPosition");
        }
        inline app::ZerofyWorldPosition* create() {
            return il2cpp::create_object<app::ZerofyWorldPosition>(get_class());
        }
    } // namespace ZerofyWorldPosition
} // namespace app::classes::types
