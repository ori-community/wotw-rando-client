#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CC_PhotoFilter__Class.h>
#include <Modloader/app/structs/CC_PhotoFilter.h>

namespace app::classes::types {
    namespace CC_PhotoFilter {
        namespace {
            inline app::CC_PhotoFilter__Class* type_info_ref = nullptr;
        }
        inline app::CC_PhotoFilter__Class** type_info = &type_info_ref;
        inline app::CC_PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::CC_PhotoFilter__Class>(type_info, "", "CC_PhotoFilter");
        }
        inline app::CC_PhotoFilter* create() {
            return il2cpp::create_object<app::CC_PhotoFilter>(get_class());
        }
    } // namespace CC_PhotoFilter
} // namespace app::classes::types
