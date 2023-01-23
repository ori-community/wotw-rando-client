#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData__Class.h>
#include <Modloader/app/structs/GlobalPlaceholderCountData.h>

namespace app::classes::types {
    namespace GlobalPlaceholderCountData {
        namespace {
            inline app::GlobalPlaceholderCountData__Class* type_info_ref = nullptr;
        }
        inline app::GlobalPlaceholderCountData__Class** type_info = &type_info_ref;
        inline app::GlobalPlaceholderCountData__Class* get_class() {
            return il2cpp::get_class<app::GlobalPlaceholderCountData__Class>(type_info, "", "GlobalPlaceholderCountData");
        }
        inline app::GlobalPlaceholderCountData* create() {
            return il2cpp::create_object<app::GlobalPlaceholderCountData>(get_class());
        }
    } // namespace GlobalPlaceholderCountData
} // namespace app::classes::types
