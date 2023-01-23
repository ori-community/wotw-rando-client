#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Class.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Boxed.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Array.h>

namespace app::classes::types {
    namespace AttachPrefabsToLiannaTongue_TonguePoints {
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Class** type_info = (app::AttachPrefabsToLiannaTongue_TonguePoints__Class**)(modloader::win::memory::resolve_rva(0x04780E80));
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachPrefabsToLiannaTongue_TonguePoints__Class>(type_info, "", "AttachPrefabsToLiannaTongue", "TonguePoints");
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints* create() {
            return il2cpp::create_object<app::AttachPrefabsToLiannaTongue_TonguePoints>(get_class());
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Boxed* box(app::AttachPrefabsToLiannaTongue_TonguePoints value) {
            return il2cpp::box_value<app::AttachPrefabsToLiannaTongue_TonguePoints__Boxed>(get_class(), value);
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Array* create_array(int size) {
            return il2cpp::array_new<app::AttachPrefabsToLiannaTongue_TonguePoints__Array>(get_class(), size);
        }
        inline app::AttachPrefabsToLiannaTongue_TonguePoints__Array* create_array(const std::vector<app::AttachPrefabsToLiannaTongue_TonguePoints>& items) {
            return il2cpp::array_new<app::AttachPrefabsToLiannaTongue_TonguePoints__Array>(get_class(), items);
        }
    } // namespace AttachPrefabsToLiannaTongue_TonguePoints
} // namespace app::classes::types
