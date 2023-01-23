#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransferMotion__Class.h>
#include <Modloader/app/structs/TransferMotion.h>

namespace app::classes::types {
    namespace TransferMotion {
        namespace {
            inline app::TransferMotion__Class* type_info_ref = nullptr;
        }
        inline app::TransferMotion__Class** type_info = &type_info_ref;
        inline app::TransferMotion__Class* get_class() {
            return il2cpp::get_class<app::TransferMotion__Class>(type_info, "RootMotion.Demos", "TransferMotion");
        }
        inline app::TransferMotion* create() {
            return il2cpp::create_object<app::TransferMotion>(get_class());
        }
    } // namespace TransferMotion
} // namespace app::classes::types
