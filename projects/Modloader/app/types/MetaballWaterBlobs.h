#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MetaballWaterBlobs__Class.h>
#include <Modloader/app/structs/MetaballWaterBlobs.h>

namespace app::classes::types {
    namespace MetaballWaterBlobs {
        namespace {
            inline app::MetaballWaterBlobs__Class* type_info_ref = nullptr;
        }
        inline app::MetaballWaterBlobs__Class** type_info = &type_info_ref;
        inline app::MetaballWaterBlobs__Class* get_class() {
            return il2cpp::get_class<app::MetaballWaterBlobs__Class>(type_info, "", "MetaballWaterBlobs");
        }
        inline app::MetaballWaterBlobs* create() {
            return il2cpp::create_object<app::MetaballWaterBlobs>(get_class());
        }
    } // namespace MetaballWaterBlobs
} // namespace app::classes::types
