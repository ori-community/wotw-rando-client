#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CVRResources__Class.h>
#include <Modloader/app/structs/CVRResources.h>

namespace app::classes::types {
    namespace CVRResources {
        namespace {
            inline app::CVRResources__Class* type_info_ref = nullptr;
        }
        inline app::CVRResources__Class** type_info = &type_info_ref;
        inline app::CVRResources__Class* get_class() {
            return il2cpp::get_class<app::CVRResources__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRResources");
        }
        inline app::CVRResources* create() {
            return il2cpp::create_object<app::CVRResources>(get_class());
        }
    } // namespace CVRResources
} // namespace app::classes::types
