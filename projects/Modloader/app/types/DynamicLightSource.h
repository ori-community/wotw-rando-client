#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicLightSource__Class.h>
#include <Modloader/app/structs/DynamicLightSource.h>

namespace app::classes::types {
    namespace DynamicLightSource {
        namespace {
            inline app::DynamicLightSource__Class* type_info_ref = nullptr;
        }
        inline app::DynamicLightSource__Class** type_info = &type_info_ref;
        inline app::DynamicLightSource__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightSource__Class>(type_info, "", "DynamicLightSource");
        }
        inline app::DynamicLightSource* create() {
            return il2cpp::create_object<app::DynamicLightSource>(get_class());
        }
    } // namespace DynamicLightSource
} // namespace app::classes::types
