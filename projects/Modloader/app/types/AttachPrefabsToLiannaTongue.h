#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue__Class.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue.h>

namespace app::classes::types {
    namespace AttachPrefabsToLiannaTongue {
        namespace {
            inline app::AttachPrefabsToLiannaTongue__Class* type_info_ref = nullptr;
        }
        inline app::AttachPrefabsToLiannaTongue__Class** type_info = &type_info_ref;
        inline app::AttachPrefabsToLiannaTongue__Class* get_class() {
            return il2cpp::get_class<app::AttachPrefabsToLiannaTongue__Class>(type_info, "", "AttachPrefabsToLiannaTongue");
        }
        inline app::AttachPrefabsToLiannaTongue* create() {
            return il2cpp::create_object<app::AttachPrefabsToLiannaTongue>(get_class());
        }
    } // namespace AttachPrefabsToLiannaTongue
} // namespace app::classes::types
