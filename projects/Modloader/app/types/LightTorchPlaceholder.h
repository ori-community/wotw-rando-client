#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightTorchPlaceholder__Class.h>
#include <Modloader/app/structs/LightTorchPlaceholder.h>

namespace app::classes::types {
    namespace LightTorchPlaceholder {
        namespace {
            inline app::LightTorchPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LightTorchPlaceholder__Class** type_info = &type_info_ref;
        inline app::LightTorchPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LightTorchPlaceholder__Class>(type_info, "", "LightTorchPlaceholder");
        }
        inline app::LightTorchPlaceholder* create() {
            return il2cpp::create_object<app::LightTorchPlaceholder>(get_class());
        }
    } // namespace LightTorchPlaceholder
} // namespace app::classes::types
