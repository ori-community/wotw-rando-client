#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CC_RadialBlur__Class.h>
#include <Modloader/app/structs/CC_RadialBlur.h>

namespace app::classes::types {
    namespace CC_RadialBlur {
        namespace {
            inline app::CC_RadialBlur__Class* type_info_ref = nullptr;
        }
        inline app::CC_RadialBlur__Class** type_info = &type_info_ref;
        inline app::CC_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::CC_RadialBlur__Class>(type_info, "", "CC_RadialBlur");
        }
        inline app::CC_RadialBlur* create() {
            return il2cpp::create_object<app::CC_RadialBlur>(get_class());
        }
    } // namespace CC_RadialBlur
} // namespace app::classes::types
